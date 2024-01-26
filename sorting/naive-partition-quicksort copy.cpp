#include <bits/stdc++.h>
using namespace std;

// Naive partition for quicksort
// It is stable 
// That's the advantage of naive partition even if it takes O(n) extra space.

void partition(int arr[], int low, int high, int p)
{
    int temp[high-low+1];
    int index = 0;
    
    for(int i=low; i<=high; i++)
    {
        if(arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    
    
    for(int i=low; i<=high; i++)
    {
        if(arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    
    
    for(int i=low; i<=high; i++)
    {
        arr[i] = temp[i-low];
    }
}

int main()
{
    int arr[] = {3, 15, 11, 7, 9, 1, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    cout << "Original Array: " << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    
    
    partition(arr, 0, n-1, n-1);
    
    
    cout << "Partitioned Array: " << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}