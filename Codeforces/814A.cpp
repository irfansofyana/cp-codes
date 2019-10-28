#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int n,i,j;
int arr[105],brr[105];
int k;

bool comp(int a,int b){
	return a>b;
}

bool cek(){
	for (i = 1; i < n ; i++) {
		if (arr[i] < arr[i-1]) return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	for (i = 0 ; i < n; i++) cin >> arr[i];
	for (i = 0 ; i < k ; i++) cin >> brr[i];
	sort(brr, brr + k, comp);
	j = 0;
	for (i = 0 ; i < n ; i++) {
		if (arr[i] == 0) {
			arr[i] = brr[j];
			j++;
		}
	}
	cout << (cek() ? "Yes" : "No") << '\n';
	return 0;
}