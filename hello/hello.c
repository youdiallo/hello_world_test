#include <stdio.h>

void say_hello(){
	printf("Hello Word!\n");
}

int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}

void calculette(){
	char choice = '\0';
	int x = 0, y = 0;
	printf("\na ====> addition\n");
	printf("s ====> soustration\n");
	scanf("%c", &choice);

	switch(choice){
		case 'a':
			scanf("%d %d", &x, &y);
			printf("\n%d + %d = %d \n", x, y, add(x, y));
		break;
		case 's':
			scanf("%d %d ", &x, &y);
			printf("\n%d - %d = %d \n", x, y, sub(x, y));
		break;
		default:
			printf("\nSyntaxe error!\n");
		break;
	}
}