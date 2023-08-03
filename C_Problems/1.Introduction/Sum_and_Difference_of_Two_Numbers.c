#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int iNum1,iNum2;
    float fNum1,fNum2;
	
    scanf("%d%d",&iNum1,&iNum2);
    scanf("%f%f",&fNum1,&fNum2);
    
    printf("%d %d\n%.1f %.1f",iNum1+iNum2,iNum1-iNum2,fNum1+fNum2,fNum1-fNum2);

    return 0;
}