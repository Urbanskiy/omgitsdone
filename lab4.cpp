#include <stdio.h>
#include <windows.h>

unsigned long Foo(unsigned long x, int p1, int p2);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long int num;
    int p1,p2;

    puts("Enter the number:");
    scanf("%lu",&num);
    puts("Enter positions to swap:");
    scanf("%d%d",&p1,&p2);
	

    printf("%lu",Foo(num,p1,p2));       // Виклик функції
    PrintBinary(num);		        // Друк (2 код) аргумента
    PrintBinary(Foo(num,p1,p2));	// Друк (2 код) результату
    system("pause");
    return 0;
}
unsigned long Foo(unsigned long x, int p1, int p2)
{
    unsigned long temp = ( ((x>>p2)&1) ^ ((x>>p1)&1) );
    x ^= temp<<p2;
    x ^= temp<<p1;	
    return x;
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
