#include <bits/stdc++.h>
using namespace std;

int n,i,j;
pair<int,int> A[4];

bool comp(pair<int,int> a,pair<int,int> b){
	if (a.first==b.first) return a.second<b.second;
	return a.first<b.first;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (i = 0 ; i < n ;i++) {
		int x,y;
		cin >> x >> y;
		A[i] = make_pair(x,y);
	}
	if (n==1) cout << -1 << '\n';
	else if (n==2) {
		if (A[0].first==A[1].first) cout << -1 << '\n';
		else if (A[0].second==A[1].second) cout << -1 << '\n';
		else cout << abs((A[0].first-A[1].first)*(A[0].second-A[1].second)) << '\n';
	}
	else if (n==3) {
		vector<int> x; vector<int> y;
		for (i = 0; i < 3 ; i++) {
			x.push_back(A[i].first); y.push_back(A[i].second);
		}
		sort(x.begin(),x.end()); sort(y.begin(),y.end());
		int temp  = 1;
		if (x[0]==x[1]) temp  = temp*abs(x[0]-x[2]);
		else temp = temp*abs(x[0]-x[1]);
		if (y[0]==y[1]) temp  = temp*abs(y[0]-y[2]);
		else temp = temp*abs(y[0]-y[1]);
		cout << temp << '\n';
	}
	else {
		sort(A,A+n,comp);
		cout << abs((A[0].second-A[1].second)*(A[0].first-A[2].first)) << '\n';
	}
	return 0;
}