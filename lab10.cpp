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
    unsigned long temp = x;

    temp |= temp >> 1;  //********************************************
    temp |= temp >> 2;  //
    temp |= temp >> 4;  // Всі біти правіше старшого "1" заповнюєм "1"
    temp |= temp >> 8;  //
    temp |= temp >> 16; //********************************************

    temp ^= temp >> 1;  // Залишаєм тільки старший одиничний біт

    return x & ~temp;
}
