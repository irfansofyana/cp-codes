#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back

using namespace std;

int n;
int arr[55][55];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
	cin >> n;
	for (int i = 0 ; i < n ; i++) 
		for (int j = 0 ; j < n ; j++)
			cin >> arr[i][j];
	for (int i = 0 ; i < n ; i++) {
		for (int j = 0 ; j < n ; j++) {
			if (arr[i][j] != 1) {
				int target = arr[i][j];
				bool ada = false;
				for (int k = 0 ; k < n ; k++) {
					for (int l = 0; l < n; l++) {
						if (arr[i][k] + arr[l][j] == target) {
							ada = true;
							break;
						}
					}
					if (ada) break;
				}
				if (!ada) {
					cout << "No\n";
					return 0;
				}
			}
		}
	}
	cout << "Yes\n";
	return 0;
}