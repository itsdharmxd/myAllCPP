/*  
C program to pass 2D array to a function
*/

#include <stdio.h>

// function to print 1D array elements
void arrayfun(int *ptr, int row, int col)
{
    int i=0,j=0;
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nArray [%d][%d] : %d",i,j,ptr[i][j]);  
			fflush(stdout);
        }
        printf("\n");
    }
}

// main function
int main()
{
  // Declare a 2D array and initialize the three rows
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
  // Passing 2D-array and number of columns and rows to Function
  arrayfun(&array,3,3);
  return 0;
}

