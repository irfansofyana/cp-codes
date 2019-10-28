#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y,prev;
pair <int,int> A[5010];

bool comp(pair<int,int> a,pair<int,int> b) {
	if (a.first==b.first) {
		return a.second<b.second;
	}
	return a.first<b.first;
}
int main() {
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> x >> y;
		A[i]=make_pair(x,y); 
	}
	sort(A,A+n,comp);
	prev=min(A[0].first,A[0].second);
	for (i=1;i<n;i++) {
		if (min(A[i].first,A[i].second)>=prev) prev=min(A[i].first,A[i].second);
		else prev=max(A[i].first,A[i].second);
	}
	cout << prev << endl;
}

