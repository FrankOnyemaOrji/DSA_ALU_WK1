#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Author - Frank Onyema Orji
 *
 * You have the same 1000 students ordered in the ascending
 * and you are required to search the same name
 * but you are asked to used binary search.
 * Still test the algorithm on small data set but consider big inputs as n.
 * What will be the running time function T(n) for the algorithm used.
 * Use Master's method to solve the equation
 * and determine the time complexity in big oh notation.
 */

int binary_search(char *arr[], int i, int r, char *x)
{
	if (r >= i) 
	{
		int mid = i + (r - i) / 2;
		int res = strcmp(x, arr[mid]);
		if (res == 0)
			return mid;
		if (res > 0)
			return binary_search(arr,mid + 1, r, x);
		return binary_search(arr,i, mid - 1, x);
	}
	return -1;
}

int main()
{
	char *students[6];
	students[0] = (char*)malloc(strlen("Jeffery") + 1);
	strcpy(students[0], "Jeffery");
	students[1] = (char*)malloc(strlen("Yves") + 1);
	strcpy(students[1], "Yves");
	students[2] = (char*)malloc(strlen("Nino") + 1);
	strcpy(students[2], "Nino");
	students[3] = (char*)malloc(strlen("Chisom") + 1);
	strcpy(students[3], "Chisom");
	students[4] = (char*)malloc(strlen("Frank") + 1);
	strcpy(students[4], "Frank");
	students[5] = (char*)malloc(strlen("Patrick") + 1);
	strcpy(students[5], "Patrick");
	char *name = "Patrick";
	int result = binary_search(students, 0, 5, name);
	if (result != -1)
	{
		printf("Name Found\n");
	} else
	{
		printf("Name not Found\n");
	}
	return 0;
}
