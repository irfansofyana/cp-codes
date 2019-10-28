#include <bits/stdc++.h>
using namespace std;

int n,i,x;
int arr[100];
int a,b;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	cin >> a >> b >> x;
	cout << upper_bound(arr + a, arr + b + 1, x) - arr - 1 << '\n';
	return 0;
}
