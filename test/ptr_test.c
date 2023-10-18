#include "main.h"

int main(void)
{
	int x = 42;
	int *ptr = &x;

	printf("Pointer address: %p\n", (void *)ptr);
	_printf("Pointer address: %p\n",(void *) ptr);
	return (0);
}
