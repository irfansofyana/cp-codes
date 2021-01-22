#include<bits/stdc++.h>
using namespace std;

int n,m,i,j;
int maks;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	maks = -1;
	for (i = 0 ; i < n ; i++) {
		int mini = 2000000000;
		for (j = 0 ; j < m ; j++) {
			int x;
			cin >> x;
			mini = min(mini,x);
		}
		maks = max(maks,mini);
	}
	cout << maks << '\n';	
	return 0;
}