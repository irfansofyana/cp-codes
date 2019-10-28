#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const int N = 2500;

int n,i,j;
int A[N + 5], B[N + 5], C[N + 5], D[N + 5];
int arr[N * N + 5];

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	scanf("%d", &n);
	for (i = 0 ; i < n ; i++) {
		scanf("%d %d %d %d", &A[i], &B[i], &C[i], &D[i]);
	}
	int idx=0;
	for (i = 0 ; i < n ; i++) {
		for (j = 0 ; j < n ; j++) {
			arr[idx++] = A[i] + B[j];
		}
	}
	sort(arr,arr + idx);
	int ans = 0;
	for (i = 0 ; i <n ; i++) {
		for (j = 0 ; j < n ; j++) {
			int bil = -C[i]-D[j];
			int lo = lower_bound(arr, arr+idx, bil) - arr;
			int hi = upper_bound(arr, arr+idx, bil) - arr;
			hi--;
			ans += hi-lo+1;
		}
	}
	printf("%d\n", ans);
	return 0;
}
