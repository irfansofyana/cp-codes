#include <bits/stdc++.h>
using namespace std;

int n,m,k,i,j;
int bilangan[10000005][15];
int arr[100005];

void precompute(){
	memset(bilangan,0,sizeof bilangan);
	for (i = 1 ; i <= 10000000; i++) {
		j = i;
		while (j > 0) {
			bilangan[i][j%10] = 1;
			j /= 10; 
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	precompute();
	cin >> n;
	bool cek = true;
	for (i = 0 ; i < n ; i++){
		cin >> arr[i];
		if (i >= 1 && arr[i]!=arr[i-1]) cek = false;
	}
	for (i = 1 ; i <= 10000000; i++) {
		k = i;
		for (j = 0 ; j < n ; j++) {
			if (bilangan[k][arr[j]] == 0) break;
			else k++;
		}
		if (j == n) {
			cout << i << '\n';
			return 0;
		}
	}
	return 0;
}