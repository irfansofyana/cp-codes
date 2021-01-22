#include <bits/stdc++.h>
using namespace std;

double arr[105][105];
double kali;
int n,i,j,t;
int ax[25];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) 
		for (j = 0 ; j < n ; j++)
			cin >> arr[i][j];
	cin >> t; 
	for (i = 0 ; i < t; i++) cin >> ax[i];
	int ans = 0;
	for (i = 0 ; i < n ; i++) {
		kali = 1;
		for (j = 0 ; j < t ; j++) kali *= arr[i][ax[j]-1];
		if (kali >= 2.0) ans++;
	}
	cout << ans << '\n';
	return 0;
}
