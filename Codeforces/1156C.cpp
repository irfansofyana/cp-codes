#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5;

int n, z;
int arr[MAXN+5];
int ans;

bool can(int mid){
	bool ret = true;
	for (int i = 0; i < mid && ret; i++){
		if (abs(arr[i] - arr[n-mid+i]) < z) ret = false;
	}
	return ret;
}

int main(){
	scanf("%d %d", &n, &z);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	sort(arr, arr + n);
	int lo = 0;
	int hi = n/2;
	while (lo <= hi){
		int mid = (lo + hi) >> 1;
		if (can(mid)){
			ans = max(ans, mid);
			lo = mid+1;
		}else hi = mid - 1;
	}	
	printf("%d\n", ans);
	return 0; 
}
