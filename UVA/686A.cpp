#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,x,i,j,tmp,ans;
char ch;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n >> x;
	while (n--) {
		cin >> ch >> tmp;
		if (ch == '+') {
			x += tmp;
		}
		else if (ch == '-') {
			if (x - tmp < 0) {
				ans++;
			}
			else x -= tmp;
		}
	}
	cout << x << " " << ans << '\n';
	return 0;
}
