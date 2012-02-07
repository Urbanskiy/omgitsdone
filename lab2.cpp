#include <stdio.h>
#include <iostream>
void Foo(long a, long b);
int main(int argc, char** argv)
{
    unsigned long int num,num2;

    puts("Enter numbers:");
    scanf("%lu",&num);
    scanf("%lu",&num2);

    Foo(num,num2);            // Виклик ф-ції Foo
	return 0;
}
void Foo(long a, long b)
{
    long sign;
    sign = ((a - b)>>31) & 1;
    printf("%ld is biger then %ld", (sign^1) * a + sign * b, sign * a + (sign^1) * b);
}
