#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

string a, b;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	if (a.size() < b.size()) swap(a,b);
	if (a == b) cout << -1 << '\n';
	else cout << a.size() << '\n';
	return 0;
}