#include <bits/stdc++.h>
using namespace std;

string a,b;
int t,i,j;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b;
		bool ans = true;
		for (i = 0 ; i < a.size(); i++) {
			if (a[i]!=b[i] && a[i]!='?' && b[i]!='?'){
				ans = false;
				break;
			}
		}
		cout << (ans?"Yes":"No") << '\n';
	}
	return 0;
}