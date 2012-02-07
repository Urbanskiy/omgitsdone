#include <stdio.h>

long Foo(long arg);
void PrintBinary(long x);

int main(int argc, char** argv)
{
    unsigned long int num;

    puts("Enter the number:");
    scanf("%ld",&num);

    printf("%ld",Foo(num));     // Виклик ф-ції Foo
    PrintBinary(num);		// Друк (2 код) аргумента
    PrintBinary(Foo(num));	// Друк (2 код) результату
	return 0;
}
long Foo(long arg)
{
    return arg&~(arg>>31); 	// Повертаєм "0" якщо від’ємний аргумент, "1" якщо навпаки
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
