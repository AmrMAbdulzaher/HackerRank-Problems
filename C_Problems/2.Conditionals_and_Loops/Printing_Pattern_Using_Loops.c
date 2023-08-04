#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int inputNum,matrixSize,elementsCount;
    scanf("%d", &inputNum);
    
    // intialize the size of the matix = 2 * inputNumber - 1
    matrixSize=2*inputNum-1;
    
    // outer loop for rows
    for(int row=0;row<matrixSize;row++)
    { 
        // inner loop for columns 
        for(int col=0;col<matrixSize;col++) 
        {
            //implmentation to calculate the min number of surrounding elements
            // we can imagine it as like an 2D matrix and we want to print an element in 0,0
            
            //row is the number of elements above & col is the number of elements at left
            elementsCount = row <= col? row : col; 
            
            //matrixSize-row-1 is the number of elements below
            elementsCount = elementsCount <= matrixSize-row-1? elementsCount : matrixSize-row-1;
            
            //matrixSize-col-1 is the number of elements at right 
            elementsCount = elementsCount <= matrixSize-col-1? elementsCount : matrixSize-col-1;
            
            // then prints the result of the input number minus the result of elementsCount Variable
            printf("%d ",inputNum-elementsCount);
        }
        printf("\n"); 

    }
    return 0;
}
