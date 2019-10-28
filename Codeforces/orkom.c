#include <stdio.h>
#include <limits.h>

int main(){
	int x = 0x15213F10 >> 4;
	char y = (char)x;
	// unsigned char z = (unsigned char)x;
	printf("%d %d %u\n", SCHAR_MAX , y, x);
}