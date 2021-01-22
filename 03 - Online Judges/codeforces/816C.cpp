#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n, m;
int arr[105][105];
int row[105], colom[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	int ans = 0;
	for (int i = 0 ; i < n ; i++) 
		for (int j = 0 ; j < m; j++)
			cin >> arr[i][j];
	if (n <= m) {
		for (int i = 0 ; i < n ; i++) {
			int mini = (int)1e9;
			for (int j = 0 ; j < m ; j++) 
				mini = min(mini, arr[i][j]);
			if (mini > 0) {
				ans += mini;
				row[i] = mini;
				for (int j = 0 ; j < m ; j++) 
					arr[i][j] -= mini;
			}
		}
		for (int i = 0; i < m ; i++) {
			int mini = (int)1e9;
			for (int j = 0 ; j < n ; j++) 
				mini = min(mini, arr[j][i]);
			if (mini > 0) {
				ans += mini;
				colom[i] = mini;
				for (int j = 0 ; j < n ; j++) 
					arr[j][i] -= mini;
			}
		}
	}
	else {
		for (int i = 0; i < m ; i++) {
			int mini = (int)1e9;
			for (int j = 0 ; j < n ; j++) 
				mini = min(mini, arr[j][i]);
			if (mini > 0) {
				ans += mini;
				colom[i] = mini;
				for (int j = 0 ; j < n ; j++) 
					arr[j][i] -= mini;
			}
		}
		for (int i = 0 ; i < n ; i++) {
			int mini = (int)1e9;
			for (int j = 0 ; j < m ; j++) 
				mini = min(mini, arr[i][j]);
			if (mini > 0) {
				ans += mini;
				row[i] = mini;
				for (int j = 0 ; j < m ; j++) 
					arr[i][j] -= mini;
			}
		}
	}
	for (int i = 0 ; i < n ; i++) 
		for(int j = 0 ; j < m ; j++) {
			if (arr[i][j] > 0) {
				cout << -1 << '\n';
				return 0;
			}
		}
	cout << ans << '\n';
	for (int i = 0 ; i < n ; i++) {
		if (row[i] > 0) {
			for (int j = 0 ; j < row[i]; j++) {
				cout << "row " << i+1 << '\n';
			} 
		}
	}
	for (int i = 0 ; i < m ; i++) {
		if (colom[i] > 0) {
			for (int j = 0; j < colom[i]; j++) {
				cout << "col " << i+1 << '\n';
			}
		}
	}
	return 0;
}