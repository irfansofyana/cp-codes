#include <bits/stdc++.h>
using namespace std;

int n,i,j;
bool arr[100];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	memset(arr,false,sizeof arr);
	for (i = 0 ; i < n ; i++) {
		cin >> j;
		arr[j] = true;
	}
	for (i = 15 ; i <= 90 ; i++) {
		for (j = i-14; j <= i ; j++) {
			if (arr[j]) break;
		}
		if (j == i+1) break;
	}
	cout << (i==91 ? 90 : i) << '\n';
	return 0;
}