#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Complete the code to calculate the sum of the five digits on n.

    int n,sum=0,r;
    scanf("%d", &n);
    if(10000<= n && n <= 99999){
        for(int i=n;n>0;)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        printf("%d",sum);

    }

    else{
        printf("NOT IN CONSTRAINTS");
    }
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //Complete the code to calculate the sum of the five digits on n.

    int n,sum=0,r;
    scanf("%d", &n);
    if(10000<= n && n <= 99999){
        for(int i=n;n>0;)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        printf("%d",sum);

    }

    else{
        printf("NOT IN CONSTRAINTS");
    }
}
