#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,arr[1000];
	
    //scanning array's size from user
    scanf("%d", &size);
	
    if(size>1000 || size<1)
    {
        printf("Invalid input!\n");
        return -1;
    }
    
    else
    {
        //scanning array's elements
        for( i = 0; i <size; i++ ){
            scanf("%d", &arr[i]);
        }
	    
        /* Write the logic to reverse the array. */
	    
        for(i = size-1; i >= 0; i--)
	    {
	    	printf("%d ", arr[i]);
	    }
        return 0;

    }
}