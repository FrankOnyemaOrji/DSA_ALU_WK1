#include <stdio.h>

/*
 * Author - Frank Onyema Orji
 *
 * Peter is a data engineer in a company and advised the company
 * to store data using linked lists instead of arrays.
 * He insists that accessing data and removing data
 * will be achieved with a greater performances.
 * To test the idea, we have 10 numbers (any random numbers).
 * The 10 numbers will be used to test performance of algorithms 
 * on arrays and linked lists.
 * Write a program that will add a new element to the beginning
 * of the array (after testing it with 10 elements generalize it with the input as n)
 * Write a program that will add a new element to the beginning
 * of the a linked list (after testing it with 10 elements generalize it with the input as n)
 * Which algorithm performs better between A and B
 * Use the asymptotic time complexity of each algorithm to backup the answer.
 */

void add_to_array(int arr[], int *n, int new_data)
{
	for (int i = *n; i >= 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = new_data;
	(*n)++;
}

int main()
{
	int arr[15];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;
	arr[5] = 6;
	arr[6] = 7;
	arr[7] = 8;
	arr[8] = 9;
	arr[9] = 10;
	arr[10] = 11;
	arr[11] = 12;
	arr[12] = 13;
	arr[13] = 14;
	arr[14] = 15;
	int n = 10;
	int new_data = 5;
	add_to_array(arr, &n, new_data);

	printf("New number added to the Array after adding new element: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	return 0;
}
