#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n;

inline void solve(int x){
	if (x == 2) cout << 1 << '\n';
	else if (x == 3) cout << 7 << '\n';
	else {
		if (x%2 == 0){
			for (int i = 0 ; i < x/2; i++) cout << 1;
			cout << '\n';
		}
		else {
			cout << 7;
			for (int i = 0 ; i < (x-3)/2; i++) cout << 1;
			//cout << 7 << '\n';
			cout << '\n';
		}
	} 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	solve(n);
	return 0;
}