#include <bits/stdc++.h>
using namespace std;

long long sum,fibo[100];
int i;

int main(){
	fibo[1] = 1;
	fibo[2] = 2;
	i = 3;
	sum+=2;
	while (i>0) {
		fibo[i] = fibo[i-1]+fibo[i-2];
		if (fibo[i]>4000000) break;
		else {
			if (fibo[i]%2==0) sum+=fibo[i];
			i++;
		}
	}
	cout << sum << endl;
}
