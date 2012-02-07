#include <stdio.h>

long Foo(long arg);
void PrintBinary(long x);

int main(int argc, char** argv)
{
    unsigned long int num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num));     // ������ �-��� Foo
    PrintBinary(num);
    PrintBinary(Foo(num));
	return 0;
}
long Foo(long arg)
{
    return arg^(arg-1) & arg;
}
void PrintBinary(long x)
{
    printf("\n");
    for (int i = 31; i >= 0; i--){
        long mask = 1 << i;
        if ( (mask & x) == 0 ){
            printf(" 0");
        }
        else printf(" 1");
    }
}
