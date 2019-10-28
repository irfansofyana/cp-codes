#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i;

ll f(ll x){
	if (x==1) return 1;
	return (x%2==1?x:(x/2))*f(x-1);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	cout << f(n) << '\n';
	return 0;
}