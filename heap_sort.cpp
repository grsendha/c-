#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (i * 2)+1;
    int right = (i * 2) + 2;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)
{
    //build heap
    for (int i = (n / 2)-1; i >=0; i--)
    {
        heapify(arr, n, i);
    }
    // sorting
    for (int i = n-1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
    
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    heapsort(arr, n);
    cout << "Sorted array is \n";
    for (int i = 0; i < n; ++i){
          cout << arr[i] << " ";
    
    }
 
    
      
}