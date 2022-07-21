#include <bits/stdc++.h>
using namespace std;
void Insert(int arr[], int size, int ele)
{
    size = size + 1;
    
    arr[size] = ele;
    int i=size;

    while (i >= 1)
    {
        int c;
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            // arr[parent]=c;
            // arr[parent]=arr[i];
            // arr[i]=c;
            swap(arr[i], arr[parent]);
            i=parent;
        }
        else
        {
             return;
        }
    }
}
int main()
{
    int arr[] = {20, 19, 18, 17, 16};
    int value = 30;
    int size = 5;
    Insert(arr, size, value);
    for (int i = 0; i < size+1; i++)
    {
        cout << arr[i] << " ";
    }
}