#include <bits/stdc++.h>
using namespace std;

int ans;
int n,i,j,k,l;
int arr[35];
int tc,t;

int main(){
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		ans = 0;
		for (i = 0 ; i < n ; i++) 
			scanf("%d", &arr[i]);
		for (i = 0 ; i < n-3 ; i++) {
			for (j = i+1 ; j < n-2 ; j++) {
				for (k = j+1 ; k < n-1 ; k++) {
					for (l = k+1 ; l < n ; l++) {
						if ((arr[i] + arr[j] + arr[k] + arr[l])%10 == 0) ans++;
					}
				}
			}
		}
		printf("Kasus #%d: %d\n", ++tc, ans);
	}
}
