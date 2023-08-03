#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int s=a+b+c;
    if (n==1)
    {
        return s;
    }
    return find_nth_term(n-1,b,c,s);

}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n-3, a, b, c);
 
    printf("%d", ans); 
    return 0;
}