#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int x;

bool cek(int x){
	int noww = n;
	int udah = 0;
	while (udah!=x) {
		if (noww%x!=1) return false;
		udah++;
		noww -= ((noww/x)+1);
	}
	if (noww%x==0) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n,n>=0) {
		int ans = -1;
		for (i = 1 ; i <= (int)sqrt(n-1); i++) {
			if ((n-1)%i==0) {
				if (cek(i)) ans = max(ans,i);
				if (cek((n-1)/i)) ans = max(ans,(n-1)/i);
			}
		}
		cout << n << " coconuts, " ;
		if (ans==-1) cout << "no solution\n";
		else cout << ans << " people and " << 1 << " monkey" << '\n';
	}
	return 0;
}