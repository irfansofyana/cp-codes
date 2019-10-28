#include <bits/stdc++.h>
using namespace std;

long long n,i,j,temp;
long long A[1000010];
long long ans;

int main(){
	for (i=1;i<=1000000;i++) {
		temp = i;
		ans = 1;
		while (temp!=1) {
			if (temp%2==0) {
				temp/=2;
				ans++;
			} 
			else {
				temp=3*temp+1;
				ans++;
			}
		}
		A[i] = ans;
	}
	for (i=1;i<=10;i++) printf("%lld\n",A[i]);
}
