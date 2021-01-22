#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y;
int tc,z,zz;
pair<int,pair<int,int> > A[1005];

bool comp(pair<int,pair<int,int> > a, pair<int,pair<int,int> > b){
	if (a.second.first*b.second.second == a.second.second*b.second.first) {
		return a.first < b.first;
	}
	return a.second.first*b.second.second < a.second.second*b.second.first;
}

int main(){
	cin.tie(0);
	cin >> tc;
	//cout << endl;
	for (z = 0 ; z < tc ; z++) {
		//if (z>=1) cout << endl;
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> x >> y;
			A[i] = make_pair(i,make_pair(x,y));
		}
		sort(A,A+n,comp);
		for (i = 0 ; i < n ; i++) {
			cout << A[i].first+1 ;
			if (i!=n-1) cout << " ";
			else cout << endl;
		}
		if (z!=tc-1) cout << endl;	
	}
	return 0;
}