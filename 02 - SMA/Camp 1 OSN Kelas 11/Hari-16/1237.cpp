#include <bits/stdc++.h>
using namespace std;

int tc,n,m,i,j;
vector<pair<string,pair<int,int> > > A;

int main(){
	cin.tie(0);
	cin >> tc;
	while (tc--) {
		cin >> n; A.clear();
		for (i = 0 ; i < n ; i++) {
			string s; int a,b;
			cin >> s >> a >> b;
			A.push_back(make_pair(s,make_pair(a,b)));
		}
		cin >> m;
		for (i = 0 ; i < m ; i++) {
			int a,ans=0,jum=0;
			cin >> a;
			for (j = 0 ; j < A.size(); j++) {
				if (A[j].second.first<=a && a<=A[j].second.second) {
					jum++;
					ans = j;
				}
			}
			if (jum==1) cout << A[ans].first << endl;
			else cout << "UNDETERMINED" << endl;
		}
		if (tc!=0) cout << endl;
	}
	return 0;
}