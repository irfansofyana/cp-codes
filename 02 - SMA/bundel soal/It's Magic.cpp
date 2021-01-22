#include <bits/stdc++.h>
using namespace std;

int n,k;

int main(){
	scanf("%d %d",&k,&n);
	printf("Think of a number, any number\n");
	printf("Multiply it by %d\n",k);
	printf("Add %d to your number\n",k*n);
	printf("Now, divide your total by %d\n",k);
	printf("Finally, subtract the result from the first number you pick\n");
	printf("BRAVO!!!\n");
	printf("Your answer is %d\n",n);
	return 0;
}
