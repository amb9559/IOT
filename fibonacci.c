#include<stdio.h>
int main()
{   
 int i,a = 0, b = 1, c;
    printf("fibonacci series: ");
    for(i=0;i<=5;i++)
    {
        printf("%d,",a);
        c = a + b;
        a = b;
        b = c;
    }
}
