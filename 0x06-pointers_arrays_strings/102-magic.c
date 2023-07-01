#include "main.h"

int main(void)

{
	int a[5] = {98, 402, 1024, 4096, 2048};
	int *p;

	p = &a[2];
	*(p + 5) = 98;
	printf("a[2] = %d\n", *(p + 5));

	return (0);
}
