#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,z;
int x;
vector<pair<int,int> > A;

bool comp(pair<int,int> a,pair<int,int> b){
	if (a.second==b.second) {
		if (a.first%2==0 && b.first%2==0) {
			return a.first<b.first;
		}
		else if ((a.first%2==1||a.first%2==-1) && (b.first%2==1||b.first%2==-1)) {
			return a.first>b.first;
		}
		else return ((a.first%2==1 || a.first%2==-1)?true:false);
	}
	return a.second<b.second;
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin >> n >> m) {
		A.clear();
		for (i = 0 ; i < n ; i++) {
			cin >> x;
			A.push_back(make_pair(x,x%m));
		}
		sort(A.begin(),A.end(),comp);
		cout << n << " " << m << endl;
		for (i = 0 ; i < n ; i++) {
			cout << A[i].first << endl;
		}
		if (n==0 && m==0) break;
	}
	return 0;
}