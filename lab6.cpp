#include <stdio.h>
long Foo(long arg);
int main(int argc, char** argv)
{
    unsigned long int num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num));     // Виклик ф-ції Foo
	return 0;
}
long Foo(long arg)
{
    return arg^(arg-1) & arg;
}
