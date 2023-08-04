#include <stdio.h>

int max_of_four(int a, int b, int c, int d);


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    // if a is more than all => print a
    if(a>b && a>c && a>d){
        return a;
    }
    // else if b is more than the rest => print b
    else if(b>c && b>d){
        return b;
    }
    // else if c is more than d => print c
    else if(c>d){
        return c;
    }
    // else => print d
    else {
        return d;
    }
}
