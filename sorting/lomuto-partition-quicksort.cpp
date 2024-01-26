#include <bits/stdc++.h>
using namespace std;

// Lomuto partition for quicksort
// It is not stable either

int partition(int arr[], int low, int high)
{
    int i = low;
    int p = high;
    
    for(int j=low; j<high; j++)
    {
        if(arr[j] <= arr[p])
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[i], arr[high]);
    return i;
}

int main()
{
    int arr[] = {3, 15, 11, 7, 9, 1, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    cout << "Original Array: " << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    
    
    partition(arr, 0, n-1);
    
    
    cout << "Partitioned Array: " << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
