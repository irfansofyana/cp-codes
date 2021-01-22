#include <bits/stdc++.h>
using namespace std;

string dummy;
int n,m,i,j;
int arr[2005];
int beda[2005];
int ans;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy;
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> arr[i];
	//sort(arr,arr+n);
	for (i = 1 ; i < n ; i++) 
		beda[i-1] = arr[i]-arr[i-1];
	ans = (int)1e+9;
	i = 0;
	while (i < n-1) {
		int frek = 1;
		j = i+1;
		while (j < n-1 && beda[j]==beda[i]) {
			frek++;
			j++;
		}
		ans = min(ans,n-(frek+1));
		i = j;
	}
	cout << ans << '\n';
	return 0;
}