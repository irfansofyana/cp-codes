#include <stdio.h>
#include <string.h>
#include <math.h>


int a, b, c;
char arr[100];

void tukar(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	scanf("%d %d", &a , &b);
	c = a*b;
	printf("%d\n", c);
	return 0;
}