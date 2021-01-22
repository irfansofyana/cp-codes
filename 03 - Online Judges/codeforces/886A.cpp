#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int arr[6];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int sum = 0;
	for (int i = 0 ; i < 6; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum % 2 == 1) {
		cout << "NO\n";
		return 0;
	}
	for (int i = 0 ; i < 6; i++) {
		for (int j = i+1; j < 6; j++) {
			for (int k = j+1; k < 6; k++) {
				if (arr[i] + arr[j] + arr[k] == sum/2) {
					cout << "YES\n";
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}a