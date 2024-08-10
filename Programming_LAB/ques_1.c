#include<stdio.h>

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b,g;
    printf("Enter two numbers :  ");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    if(g==1)
        printf("\nCo-prime numbers");
    else
        printf("\nNot co-prime numbers");
    return 0;
}