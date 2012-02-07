#include <stdio.h>

void Foo(long a, long b);
void PrintBinary(long x);

int main(int argc, char** argv)
{
    long int num,num2;

    puts("Enter numbers:");
    scanf("%lu",&num);
    scanf("%lu",&num2);

    Foo(num,num2);
    PrintBinary(num);		// Друк (2 код) аргумента1
    PrintBinary(num2);		// Друк (2 код) аргумента2
	return 0;
}
void Foo(long a, long b)
{
    long sign;
    sign = ((a - b)>>31) & 1;
    printf("%ld is biger then %ld \n", (sign^1) * a + sign * b, sign * a + (sign^1) * b); // Порівняння двох чисел
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
