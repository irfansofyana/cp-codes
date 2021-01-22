#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, d;
string s[105];

bool cek(int x){
	for (int i = 0 ; i < n; i++) {
		if (s[x][i] == '0') return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> d;
	for (int i = 0 ;i < d; i++) cin >> s[i];
	int maks = 0;
	int i = 0;
	while (i < d) {
		int j = i;
		while (i < d && !cek(i)) i++;
		j = i+1;
		if (i == d) break;
		int ans = 1;
		while (j < d && cek(j)) {
			ans++;
			j++;
		}
		maks = max(maks, ans);
		i = j; 
	}
	cout << maks << '\n';
	return 0;
}