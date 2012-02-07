#include <stdio.h>
unsigned long Foo(unsigned long x);
void PrintBinary(unsigned long x);
int main(int argc, char** argv)
{
    unsigned long num;

    puts("Enter the number:");  // for example 259 -> 3
    scanf("%lu",&num);

    printf("%lu",Foo(num));     //������ �-���
    PrintBinary(num);           // ���� (2 ���) ���������
    PrintBinary(Foo(num));      // ���� (2 ���) �������
    return 0;
}
unsigned long Foo(unsigned long x)
{
    unsigned long temp = x;

    temp = ~ temp;
    temp |= temp >> 1;  //********************************************
    temp |= temp >> 2;  //
    temp |= temp >> 4;  // �� ��� ������ �������� "1" ��������� "1"
    temp |= temp >> 8;  //
    temp |= temp >> 16; //********************************************
    temp ^= temp >> 1;  //������� ����� ������� ��������� ��

    return temp;
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
