#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int ans,arr[100005];
int temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	i = 0;
	while (i < n) {
		temp = 1;
		j = i+1;
		while (j < n && arr[j] > arr[j-1]) {
			temp++;
			j++;
		}
		ans = max(ans,temp);
		i = j;
	}
	cout << ans << '\n';
	return 0;
}
