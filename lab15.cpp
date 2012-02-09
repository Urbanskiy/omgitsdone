#include <stdio.h>
#include <windows.h>

unsigned long Foo(unsigned long x);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long int num;
    int p1,p2;

    puts("Enter the number:");
    scanf("%lu",&num);
    
    printf("%lu",Foo(num));       // Виклик функції
    PrintBinary(num);		 // Друк (2 код) аргумента
    PrintBinary(Foo(num));	// Друк (2 код) результату
    system("pause");
    return 0;
}
unsigned long Foo(unsigned long x)
{	
    return (x&(x-1))^1;
}
void PrintBinary(unsigned long x)
{
    printf("\n");
    for (int i = sizeof(long)*8-1; i >= 0; i--){
        long mask = 1 << i;
        if ( (mask & x) == 0 ){
            printf(" 0");
        }
        else printf(" 1");
    }
}
