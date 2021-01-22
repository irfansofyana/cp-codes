#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int arr[100];
	for (int i = 0 ; i < n; i++) cin >> arr[i];
	if (n == 1){
		if (arr[0] == 0) cout << "UP\n";
		else if (arr[0] == 15) cout << "DOWN\n";
		else cout << -1 << '\n';
	}
	else {
		bool naik = false;
		for (int i = 1; i < n ; i++) {
			if (i == 1) {
				if (arr[i] > arr[0]) naik = true;
			}
			else {
				if (arr[i] > arr[i-1]) naik = true;
				else if (arr[i] < arr[i-1]) naik = false;
			}
		}
		if (naik && arr[n-1] == 15) cout << "DOWN\n";
		else if (naik) cout << "UP\n";
		else if (!naik && arr[n-1] == 0) cout << "UP\n";
		else cout << "DOWN\n";
	}
	return 0;
}