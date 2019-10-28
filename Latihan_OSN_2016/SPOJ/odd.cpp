#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum(ll a){
	if (a%2==0) return (a/2)*(a/2);
	else return ((a+1)/2) *((a+1)/2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,m;
	cin >> n >> m;
	cout << sum(m)-((n==0) ? 0:sum(n-1)) << '\n';
	return 0;
}