#include "hello.h"

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;
	say_hello();
	printf("Add two numbers: \n");
	scanf("%d %d", &x, &y);
	printf("%d + %d = %d\n", x, y , add(x, y));
	return 0;
}