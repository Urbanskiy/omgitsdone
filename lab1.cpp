#include <stdio.h>
unsigned long Foo(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num));     // Виклик ф-ції Foo
	return 0;
}
unsigned long Foo(unsigned long x)
{
    return x + ( (2 >>  (x & 1) ) );
}
