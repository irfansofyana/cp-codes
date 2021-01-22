#include <bits/stdc++.h>
using namespace std;

int arr[105];
int n,i,j,lo;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	lo = lower_bound(arr,arr + 5, 9) - arr;
	cout << lo << '\n';
}
