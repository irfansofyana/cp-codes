#include <bits/stdc++.h>
using namespace std;

int i,j;
long long fibo[50],ans;

int main(){
	fibo[0]=0; fibo[1]=1;
	for (i=2;i<=44;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for (i=0;i<=44;i++){
		j=fibo[i]%100;
		if ((j/10)==j%10) ans+=fibo[i];
	}
	cout << ans << endl;
}
