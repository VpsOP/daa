#include <bits/stdc++.h>
using namespace std;

// Hoare's partition for quicksort
// Hoare's partition does not place the pivot at its right place but it return index j;
// Left side of this index 'j' have smaller elements than pivot 
// Right side of this index 'j' have greater and equal elements than pivot 
// It is not stable

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l-1;
	int j = h+1;

    while(true){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i>=j)return j;
		
        swap(arr[i],arr[j]);
    }
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


