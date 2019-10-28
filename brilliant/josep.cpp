#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int f[2005];
int A[]={999,121,2,15,99};
int B[]={11,12,1,16,3};

int main(){
	int ans = 0;
	for (int z = 0 ; z < 5 ; z++){
		n = A[z]; m = B[z];
		f[1] = 1;
		for (i = 2 ; i <= n ; i++) {
			f[i] = (f[i-1]+m-1)%i + 1;
		}
		ans += f[n] ;
	}
	cout << ans << '\n';
}