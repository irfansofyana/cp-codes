#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string s;
ll n,i,j;
ll ans,bil;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s >> n;
	if (n%2 == 1){
		bil = n/3;
		if (bil%2 == 0) {
			ll tmp = bil/2;
			ans += (tmp*(tmp+1));
			tmp = bil-1;
			ans += ((tmp+1)*(tmp+1))/2;
			ans += (n+1)/2;
		}
		else if (bil%2==1){
			ll tmp = bil-1;	
			tmp /= 2;
			ans += (tmp*(tmp+1));
			tmp = (bil+1)/2;
			ans += 2*tmp*tmp;
			if (((n+2)/3) == bil) ans -= bil;
			ans += (n+1)/2;
		}
	}
	else {
		bil = n/3;
		if (bil%2 == 1) {
			ll tmp = bil - 1;
			tmp /= 2;
			ans += 2*(tmp*(tmp+1));
			ans += ((bil+1)/2)*((bil+1)/2);
			ans += (n/2)+1;
		}
		else if (bil%2==0) {
			ll tmp = bil - 1;	
			ans += ((tmp+1)/2)*((tmp+1)/2);
			ll temp = bil/2;
			ans += 2*(temp*(temp+1));
			if (((n+2)/3) == bil) ans -= bil;
			ans += (n/2)+1;
		}
	}
	cout << ans << '\n';
	return 0;
}