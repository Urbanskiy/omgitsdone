#include <stdio.h>

unsigned long Foo(unsigned long x, int p1, int p2);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long int num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num,1,3));     // Виклик функції
    PrintBinary(num);		// Друк (2 код) аргумента
    PrintBinary(Foo(num,2,4));	// Друк (2 код) результату
    return 0;
}
unsigned long Foo(unsigned long x, int p1, int p2)
{
    return (((x >> p1) & 1) ^ (x >> p2) & 1);
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
