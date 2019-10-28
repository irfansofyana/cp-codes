#include <bits/stdc++.h>
using namespace std;

char ch;
int t,i,j,n,tc;
int jam,menit,detik;
int interval,tmp;
int arr[20005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> jam >> ch >> menit >> ch >> detik;
			arr[i] = 3600*jam + 60*menit + detik;
		}
		sort(arr,arr+n);
		cin >> interval;
		int ans = 0;
		queue<int> antri;
		for (i = 0 ; i < n ; i++) {
			if (i == 0) {
				ans++;
				antri.push(arr[i] + interval - 1);
			}
			else {
				if (!antri.empty()) {
					tmp = antri.front();
					if (arr[i] > tmp) {
						antri.pop();
						antri.push(arr[i] + interval - 1);
					}
					else if (arr[i] <= tmp){
						ans++;
						antri.push(arr[i] + interval - 1);
					}
				}
				else {
					ans++;
					antri.push(arr[i] + interval - 1);
				}
			}
		}
		cout << "Case " << ++tc << ": " << ans << '\n';
	}
	return 0;
}
