#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,awal;
int arr[105];
long long ans;
bool tanya;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++)
		cin >> arr[i];
	i = 0;
	tanya = false;
	ans = 1;
	while (i < n){
		if (arr[i]==1) {
			if (!tanya) {
				awal = i;
				i++;
				tanya = true;
			}
			else {
				ans *= (i-awal);
				awal = i;
				i++;
			}
		}
		else i++;
	}
	for (i = 0 ; i < n ; i++) {
		if (arr[i]==1) break;
	}
	if (i==n) {
		cout << 0 << '\n';
		return 0;
	}
	else cout << ans << '\n';
	return 0;
}