#include <stdio.h>
#include <string.h>
int main()
{
	char* a = "12345678987654321", *b = "98765432123456789";
	char* c = sum(a, b);
	printf("%s", c);
	delete[] c;
}