#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

typedef long long ll;

int n,m,q;
int arr[55][55];
string s;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (int i = 0 ; i < n ; i++) 
		for (int j = 0 ; j < m ; j++) 
			cin >> arr[i][j];
	cin >> q;
	while (q--) {
		int a, b;
		cin >> s >> a >> b;
		if (s == "row") {
			for (int i = 0 ; i < m ; i++)
				arr[a-1][i] += b;
		}
		else {
			for (int i = 0 ; i < n; i++) 
				arr[i][a-1] += b;
		}
	} 
	int sum = 0;
	int mini = (int)2e9;
	int maks = (int)-1;
	for (int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < m ; j++) {
			sum += arr[i][j];
			maks = max(maks, arr[i][j]);
			mini = min(mini, arr[i][j]);
		}
	}
	cout << sum << " " << mini << " " << maks << '\n';3 
	return 0;
}