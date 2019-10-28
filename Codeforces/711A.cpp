#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(a) (int)a.size()

using namespace std;

int n,i,j;
char arr[1005][10];

void solve(){
	bool ada = false;
	for (i = 0 ; i < n ; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][0] == 'O') {
			arr[i][0] = arr[i][1] = '+';
			ada =true;
			break;
		}
		if (arr[i][3] == arr[i][4] && arr[i][4] == 'O') {
			arr[i][3] = arr[i][4] = '+';
			ada = true;
			break;
		}
	}
	if (!ada) cout << "NO\n";
	else{
		cout << "YES\n";
		for (i = 0 ; i < n ; i++) {
			for (j = 0 ; j < 5 ; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < 5 ; j++) 
			cin >> arr[i][j];
	}
	solve();
	return 0;
}
