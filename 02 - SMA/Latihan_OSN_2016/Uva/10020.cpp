#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;

int n,m,i,j;
vector<pi> A;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		cin >> m;
		int x,y;
		A.clear;
		while (cin >> x >> y) {
			if (x==0 && y==0) break;
			else A.pb(mp(x,y)); 
		}
		sort(ans.begin(),ans.end());
		
	}
	return 0;
}