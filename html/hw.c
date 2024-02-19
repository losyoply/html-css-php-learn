#include <stdio.h>
#include <string.h>
int main(void) {
	int a, b;
	char oper;
	scanf("%f%c%f", &a,&oper,&b);
	printf("%f %f %c", a,b,oper);
	return 0;
}