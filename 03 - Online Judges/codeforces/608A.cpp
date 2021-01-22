#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,s,i,j;
int t[100005];

int main(){
	OPTIMASI
	cin >> n >> s;
	memset(t,-1,sizeof t);
	for (i = 0 ; i < n ; i++) {
		int x,y;
		cin >> x >> y;
		t[x] = max(t[x],y);
	}
	int ans = 0;
	for (i = s; i>=0 ; i--) {
		if (t[i]!=-1) {	
			if (t[i]>=ans) {
				ans += (t[i]-ans);
			}
		}
		if (i!=0) ans++;
	}
	cout << ans << '\n';
	return 0;
}