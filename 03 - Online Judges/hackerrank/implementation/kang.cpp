#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int x1, v1, x2, v2;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> x1 >> v1 >> x2 >> v2;
	//x1 + v1k = x2 + v2k
	if (v2 == v1 && x1 != x2) cout << "NO\n";
	else if (v2 == v1) cout << "YES\n";
	else if ((x1 - x2)%(v2 - v1) != 0) cout << "NO\n";
	else {
		if (((x1 - x2)/(v2 - v1)) < 0) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;	
}