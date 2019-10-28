#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int t, n, m;

char f(int x,int y){
	if (x == 1) return 'R';
	else if (y == 1) return 'D';
	else if (x == 2 && y >= 2) return 'L';
	else if (y == 2) return 'U';
	int a = x/2; if (x%2 == 0) a--;
	int b = y/2; if (y%2 == 0) b--;
	a = min(a,b);
	//cout << x-a*2 << " " << y-a*2 << endl;
	return f(x-a*2, y-a*2);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		cout << f(n, m) << '\n';
	}
	return 0;
}