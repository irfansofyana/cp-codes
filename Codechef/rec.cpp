#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,m,i,j;
int x,ans;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ans = -1;
		for (i = 1 ; i <= (int)sqrt(n*m); i++){
			if ((n*m)%i==0) {
				int temp1 = (int)sqrt(i);
				if (temp1*temp1==i) ans = max(ans,i);
				j = (n*m)/i;
				int temp = (int)sqrt(j);
				if (temp*temp==j) ans = max(ans,j);
			}
		}
		cout << (n*m)/ans << '\n';
	}
	return 0;
}