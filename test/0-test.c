#include "main.h"

int main(void)
{
	int i, j;
	int arr[] = {1, 2, 3, 4, 5};
	char *str = "Hello, world!";

	i = 10;
	_printf("This is an integer: %d\n", i);
	_printf("This is a string: %s\n", str);

	_printf("Array of integers:\n");
	for (j = 0; j < 5; j++)
		_printf("%d\n", arr[j]);
	return (0);
}
