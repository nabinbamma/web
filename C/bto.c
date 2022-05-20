#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long int b1, o = 0, i = 1, rem;
 
    printf("Enter the value for  binary number: ");
    scanf("%ld", &b1);
    while (b1 != 0)
    {
        rem= b1 % 10;
        o = o + rem * i;
      i = i * 2;
        b1 = b1 / 10;
    }
    printf("Equivalent octal value: %lo", o);
    getch();
}
