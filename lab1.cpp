#include <stdio.h>
unsigned long Foo(unsigned long x);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long num;

    puts("Enter the number:");
    scanf("%lu",&num);

    printf("%lu",Foo(num));     // Виклик ф-ції
    PrintBinary(num);           // Друк у двійковому коді аргумента
    PrintBinary(Foo(num));      // Друк у двійковому коді результату
	return 0;
}
unsigned long Foo(unsigned long x)
{
    return x + ( (2 >>  (x & 1) ) );    // повертає наступне парне число за заданим
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
