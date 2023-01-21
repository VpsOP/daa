#include <stdio.h>
#include <conio.h>

void swap(int*, int*);

void main()
{
	clrscr();
	int arr[50], size, tmp, minidx, i, j;

	// Take the input of the array
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	printf("Enter %d elements: ", size);
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Selection Sort
	for(i = 0; i < size; i++)
	{   minidx = i;
		for(j = i; j < size; j++)
		{
			if(arr[minidx] > arr[j])
			{
				minidx = j;
			}
		}
		swap(&arr[minidx], &arr[i]);
	}

	// Print the array
	for(i = 0; i < size; i++)
	{
		printf("%4d", arr[i]);
	}
	getch();
}

// Function to swap two numbers
void swap(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
