#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int arr[50], size, tmp, i, j, k;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("\nEnter %d elements: ", size);
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}


	//! Alternate Insertion Sort -> More Time Complexity

	// for(i = 1; i < size; i++)
	// {
	// 	for(j = 0; j < i; j++)
	// 	{
	// 		if(arr[j] > arr[i])
	// 		{
	// 			tmp = arr[i];
	// 			for(k = i-1; k >= j; k--)
	// 			{
	// 				arr[k+1] = arr[k];
	// 			}
	// 			arr[j] = tmp;
	// 		}
	// 	}
	// }

	// O(n^2) Implementation

	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	// Print the sorted array
	for(i = 0; i< size; i++)
	{
		printf("%4d", arr[i]);
	}
	getch();

}
