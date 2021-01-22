#include <bits/stdc++.h>
using namespace std;

int prev,a,b,c;
int ans,i,j,temp;

int main(){
	cin.tie(0);
	while (cin >> prev >> a >> b >> c ) {
		if (prev==0 && a==0 && b==0 && c==0) break;
		ans = 720;
		i = prev; temp = 0;
		while (prev!=a) {
			temp++;
			if (prev==39) prev = 0;
			else prev++;
		}
		ans += 9*temp; temp = 0;
		while (prev!=b) {
			temp++;
			if (prev==0) prev = 39;
			else prev--;
		}
		ans += 9*temp; temp = 0;
		while (prev!=c) {
			temp++;
			if (prev==39) prev = 0;
			else prev++;
		}
		cout << ans+90 << endl;
	}
	return 0;
}