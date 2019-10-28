#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

long long fibo[100];
int ans,i,idx;

int main(){
	fibo[0]=0;
	fibo[1]=1;
	for (i=2;i;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		if (fibo[i]>INF) {
			idx=i-1;
			break;
		}
	}
	for (i=0;i<=idx;i++){
		long long temp;
		temp=static_cast<long long>(sqrt(fibo[i]));
		if (temp*temp==fibo[i]) {
			ans+=fibo[i];
		}
	}
	cout << ans << endl;
}
