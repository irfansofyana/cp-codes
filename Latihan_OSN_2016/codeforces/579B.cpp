#include <bits/stdc++.h>
using namespace std;

typedef pair<int,pair<int,int> > pii;

int n,i,j,k,l;
int pasangan[805];
vector<pii> A;

bool comp(pii a,pii b){
	return a.first > b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 2 ; i <= 2*n ; i++) {
		for (j = 1 ; j <= i-1; j++) {
			int x;
			cin >> x;
			A.push_back(make_pair(x,make_pair(j,i)));
		}
	}
	sort(A.begin(),A.end(),comp);
	/*for (i = 0 ; i < A.size(); i++){
		cout << A[i].first << " " << A[i].second.first << " " << A[i].second.second << '\n';
	}*/
	memset(pasangan,-1,sizeof pasangan);
	pasangan[A[0].second.first] = A[0].second.second;
	pasangan[A[0].second.second] = A[0].second.first;
	i = 1;
	while (i < A.size()){
		if (pasangan[A[i].second.first]!=-1 || pasangan[A[i].second.second]!=-1) i++;
		else {
			pasangan[A[i].second.first] = A[i].second.second;
			pasangan[A[i].second.second] = A[i].second.first;
			i++;
		}
	}
	for (i = 1 ; i <= 2*n; i++) {
		cout << pasangan[i];
		cout << (i==2*n ? '\n': ' ');
	}
	return 0;
}