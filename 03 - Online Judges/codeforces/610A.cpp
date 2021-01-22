#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll n;

int main(){
	OPTIMASI
	cin >> n;
	if (n%2==1) cout << 0 << '\n';
	else {
		n /=2 ;
		if (n%2==0) cout << (n/2)-1 << '\n';
		else cout <<(n-1)/2 << '\n';
	}
	return 0;
}