#include <bits/stdc++.h>
using namespace std;

long long sum,i,j;
long long fibo[50];

int main(){
	for (i=0;i<=1;i++) fibo[i]=i;
	for (i=2;i<=44;i++) {
		fibo[i]=fibo[i-1]+fibo[i-2];
		if ((fibo[i]%13==4) || (fibo[i]%13==8)) sum+=fibo[i];
	} 
	cout << sum << endl;
}
