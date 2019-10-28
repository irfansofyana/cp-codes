#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);

using namespace std;

int t,tc,n,k,p;
int i,j;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> k >> p;
		cout << "Case " << ++tc << ": ";
		cout << ((k+p)%n==0?n:(k+p)%n) << endl;
	}
	return 0;
}