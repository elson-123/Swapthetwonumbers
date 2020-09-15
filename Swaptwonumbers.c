#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter first number: \n");
scanf("%d", &a);
printf("Enter second number: \n");
scanf("%d", &b);
printf("Before swaping: \n");
printf("%d", a);
printf("%d", b);
a=b;
b=temp;
printf("After  swaping: \n");
printf("%d", a);
printf("%d", b);
return 0;
}
