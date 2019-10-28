#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
bool CAN[105];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		int x;
		cin >> x;
		for (j = 0 ; j < x; j++){
			int y;
			cin >> y;
			CAN[y] = true;
		}
	}
	for (i = 1  ; i <= m ;i++) {
		if (!CAN[i]) {
			puts("NO"); return 0;
		}
	}
	puts("YES");
	return 0;
}