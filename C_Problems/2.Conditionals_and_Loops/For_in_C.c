#include <stdio.h>

int main()
{
    int firstNum, secondNum;
    scanf("%d\n%d", &firstNum, &secondNum);
    
    //looping from 
    for(int i=firstNum; i<=secondNum; i++)
    {
        switch(i)
        {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
            if(i%2==0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
            break;
        }
        printf("\n");
    }
    return 0;




}

