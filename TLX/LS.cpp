#include <bits/stdc++.h>
using namespace std;

int n,i,j;
map<int,int> mep;
int x;

int main(){
	cin >> n >> x;
	for (i = 0 ; i < n ; i++) {
		int y;
		cin >> y;
		if (mep[y]==0) mep[y] = i+1;
	}
	if (mep[x]==0) cout << -1 << '\n';
	else cout << mep[x]-1 << '\n';
	return 0;
}