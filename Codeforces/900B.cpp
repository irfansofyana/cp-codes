#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
typedef long long ll;
using namespace std;

int main(){
	ll a,b,c;
	cin >> a >> b >> c;
	ll tmp = a % b;
	ll cnt = 0;
	for(int i=1;i<=1e6;i++){
		a = a * 10;
		ll d = a / b;
		a = a % b;
		if(d == c){
			cout << i << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
}