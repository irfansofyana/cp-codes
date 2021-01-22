#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int t;
LL N, P;
LL arr[1005];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--){
		cin >> N >> P;
		for (int i = 0; i < N; i++){
			cin >> arr[i];
		}	
		LL ans = -1;
		LL nans = 0;
		for (int i = 0; i < N; i++){
			LL sum = 0;
			for (int j = i; j < N; j++){
				sum += arr[j];
				sum %= P;
				if (sum > ans){
					ans = sum;
					nans = 1;
				}else if (sum == ans) nans++;
			}
		}
		cout << ans << " " << nans << '\n';
	}
	return 0;
}