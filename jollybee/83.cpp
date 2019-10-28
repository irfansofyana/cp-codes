#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
int k,m;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << "Case #" << ++tc << ": " ;
		if (m<=n) cout << m << '\n';
		else {
			if (((m-n)/(n-1))%2==1) cout << (m-n)%(n-1)+1 << '\n';
			else cout << n-((m-n)%(n-1)) << '\n';
		}
	}
	return 0;
}