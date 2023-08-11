#include <stdio.h>

void update(int *a,int *b) {
   // Complete this function    
   int temp;
   //store the value which is stored in *a in temp
   temp=*a;
   // store the summation of value in *a and value in *b in *a
   *a=*a+*b;
   // store the absolute value of difference of temp in *a and value in *b in *b
   *b=abs(temp-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
