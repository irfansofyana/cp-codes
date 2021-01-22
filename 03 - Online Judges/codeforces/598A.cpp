#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll sum,n,i,j;
int t;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		sum = 0;  
		cin >> n;
		for (i = 0 ; i <=30; i++) {
			ll temp = (1<<i);
			if (temp<=n) sum += temp;
		}
		cout << ((n*(n+1))/2)-2*sum << '\n';
	}
	return 0;
}