#include <bits/stdc++.h>
using namespace std;

long long f[10010];
int tc,i,j,n,k;

int main(){	
	cin >> tc;
	j = 1;
	while (tc--) {
		cin >> n >> k;
		memset(f,0,sizeof f);
		f[1] = 1;
		for (i=2;i<=n;i++) 
			f[i] = (f[i-1]+k-1)%i+1;
		cout << "Case "<<j<<": "<<f[n]<<endl;
		j++;
	}	
}
