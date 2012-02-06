#include <stdio.h>

int main(int argc, char* argv[])
{
    long int num = -27;
	printf("%ld",num&~num>>31 );
	return 0;
}
