#include <stdio.h>

long Foo(long arg);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long int num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num));     // Виклик ф-ції Foo
    PrintBinary(num);
    PrintBinary(Foo(num));
	return 0;
}
long Foo(long x)
{
    long temp = (long)x;
    x = ~x;
    x |= x << 1;
    x |= x << 2;
    x |= x << 4;
    x |= x << 8;
    x |= x << 16;
    x ^= x << 1;
    return x | temp;
}
void PrintBinary(unsigned long x)
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
