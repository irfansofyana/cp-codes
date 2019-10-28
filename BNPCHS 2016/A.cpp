#include <bits/stdc++.h>
#define pb push_back
using namespace std;

typedef long long ll;

int t,tc;
int a,b,c;
int maks;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		maks = a;
		maks = max(maks,b);
		maks = max(maks,c);
		cout << "Kasus #" << ++tc << ": ";
		if (maks == a) cout << "JINGGA\n";
		else if (maks == b) cout << "PUTRA\n";
		else cout << "WIJAYA\n";
	}
	return 0;
}
