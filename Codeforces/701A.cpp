#include <bits/stdc++.h>

using namespace std;

int n, arr[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	int sum = 0;
	for (int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int target = (2*sum)/n;
	for (int i = 0 ; i < (n/2) ; i++) {
		bool ada = false;
		for (int j = 0; j < n && !ada; j++) {
			for (int k = 0; k < n && !ada ; k++) {
				if (j!=k && arr[k] != -1 && arr[j]!=-1 && arr[j]+arr[k] == target) {
					cout << j + 1<< " " << k + 1<< '\n';
					arr[j] = -1; arr[k] = -1;
					ada = true;
					break;
				}
			}
		}
	}
	return 0;
}