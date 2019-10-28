#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int t;
ll a,b;

ll sqr(ll x){
	return x*x;
}

ll pangkat(ll a,ll b){
	if (b==0) return 1;
	else if (b==1) return a%10;
	else if (b%2==0) return sqr(pangkat(a,(b/2))%10)%10;
	else if (b%2==1) return ((a%10)*(sqr(pangkat(a,(b-1)/2)%10)%10))%10;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		a %= 10;
		cout << pangkat(a,b) << '\n';
	}
	return 0;
}