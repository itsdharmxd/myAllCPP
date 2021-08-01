/*  
C program to pass 1D array to a function
*/

#include <stdio.h>

// function to print 1D array elements
void arrayfun(int*ptr , int count)
{
    int i=0;
    
    for(i=0;i<count;i++)
    {
        printf("\nArray [%d] : %d",i,ptr[i]);  fflush(stdout);
    }
    
}

// main function
int main()
{
	// Declare a buffer of type "char"
	int array[10] = {1,2,3,4,5,6,7,8,9};
	
	// Passing 1D-array to Function
	arrayfun(array,9);
	return 0;
}

