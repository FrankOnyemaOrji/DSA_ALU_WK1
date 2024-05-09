#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Author - Frank Onyema Orji.
 * Task - You have a random names of 1000 students in BSE and
 * the interest is to check that the name "Patrick" is available.
 * Your are required to write and algorithm that will linear
 * search through the names and return  "Found" upon finding the name.
 * Else, it will return "Name not found".
 */

int name_linear_search(char *arr[], int n, char *x)
{
    for (int i = 0; i < n; i++)
	{
        if (strcmp(arr[i], x) == 0)
		{
            return (i);
        }
    }
    return (-1);
}

int main(void)
{
    char *students[15];
	students[0] = (char *)malloc(strlen("Frank") + 1);
	strcpy(students[0], "Frank");
	students[1] = (char *)malloc(strlen("Yves") + 1);
	strcpy(students[1], "Yves");
	students[2] = (char *)malloc(strlen("Walter") + 1);
	strcpy(students[2], "Walter");
	students[3] = (char *)malloc(strlen("Jeffery") + 1);
	strcpy(students[3], "Jeffery");
	students[4] = (char *)malloc(strlen("Patrick") + 1);
	strcpy(students[4], "Patrick");
	students[5] = (char *)malloc(strlen("Nino") + 1);
	strcpy(students[5], "Nino");
	students[6] = (char *)malloc(strlen("Peter") + 1);
	strcpy(students[6], "Peter");
	students[7] = (char *)malloc(strlen("John") + 1);
	strcpy(students[7], "John");
	students[8] = (char *)malloc(strlen("Ochong") + 1);
	strcpy(students[8], "Ochong");
	students[9] = (char *)malloc(strlen("Fred") + 1);
	strcpy(students[9], "Fred");
	students[10] = (char *)malloc(strlen("Will") + 1);
	strcpy(students[10], "Will");
	students[11] = (char *)malloc(strlen("Mathew") + 1);
	strcpy(students[11], "Mathew");
	students[12] = (char *)malloc(strlen("Roseline") + 1);
	strcpy(students[12], "Roseline");
	students[13] = (char *)malloc(strlen("Sam") + 1);
	strcpy(students[13], "Sam");
	students[14] = (char *)malloc(strlen("David") + 1);
	strcpy(students[14], "David");
    char *name = "Patrick";
    int result = name_linear_search(students, 15, name);
    if (result != -1)
	{
        printf("Name Found\n");
    } else
	{
        printf("Name not found\n");
    }
    return (0);
}

