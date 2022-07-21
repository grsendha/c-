#include <bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[], int size)
{
    int j;
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] >= temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
    }
}
main()
{
    int arr[] = {74, 33, 43, 64, 34, 66, 55, 44, 76, 54, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    Insertion_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}