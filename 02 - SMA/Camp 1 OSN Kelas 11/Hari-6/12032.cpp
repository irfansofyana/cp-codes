#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans,power,t;
int A[100005];
int tc;
bool ada;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (i = 1; i <= n ; i++) cin >> A[i];
		ans = A[1]; power = ans-1;
		for (i = 2; i <= n ; i++) {
			if (A[i]-A[i-1]<power) continue;
			else {
				if (A[i]-A[i-1]==power) {
					power--;
				}
				else if (A[i]-A[i-1]>power){
					if (A[i]-A[i-1]>ans) {
						ans = A[i]-A[i-1];
						power = ans-1;
					}
					else {
						ans++;
						power = ans;
					}
				}
			}
		}
		cout << "Case " << ++t << ": " << ans << endl;
	}
	return 0;
}