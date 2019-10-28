#include <bits/stdc++.h>
using namespace std;

long long temp,a,b;
long long i,j;

int main(){
	for (i=1;i<=100;i++) {
		temp+=i;
	}
	a = temp*temp;
	for (i=1;i<=100;i++) {
		b+=i*i;
	}
	cout << a-b << endl;
}
