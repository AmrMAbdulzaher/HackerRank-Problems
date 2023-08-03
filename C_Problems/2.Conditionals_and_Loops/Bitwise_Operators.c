#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  
  int andMax=0,orMax=0,xorMax=0;
  
  for (int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
        int max = i&j;
         if ((max) > andMax && (max) < k){
             andMax=max;  }
         
         max = i |j;
         if ((max) > orMax && (max) < k){
             orMax=max; }
         
         max= i^j;
         if ((max) > xorMax && (max) < k) {
             xorMax=max; }
      }
      
  }
        printf("%d\n%d\n%d\n",andMax,orMax,xorMax);

}

int main() {
    int n, k;
  
    scanf("%d%d",&n,&k);
    calculate_the_maximum(n, k);
 
    return 0;
}
