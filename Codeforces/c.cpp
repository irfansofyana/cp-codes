#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int m;
int arr[1005];
bool ada[1000005];

int gcd(int x,int y){
	return (y == 0 ? x : gcd(y, x%y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m;
	for (int i = 0 ; i < m ; i++) {
		cin >> arr[i];
		ada[arr[i]] = true;
	}
	for (int i = 0 ; i < m; i++) {
		for (int j = i+1; j < m ; j++) {
			if (ada[gcd(arr[i], arr[j])] == false) {
				cout << -1 << '\n';
				return 0;
			}
		}
	}
	cout << m << '\n';
	for (int i = 0 ; i < m ; i++) {
		cout << arr[i];
		cout << (i == m-1 ? '\n' : ' ');
	}
	return 0;
}