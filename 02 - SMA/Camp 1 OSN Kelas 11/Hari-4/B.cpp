#include <bits/stdc++.h>
using namespace std;

int k,n,i,j;
int x;
vector<pair<int,int> > solusi;

bool comp(pair<int,int> a, pair<int,int> b){
	if (a.first==b.first) return a.second>b.second;
	return a.first>b.first;
}

int main() {
	cin.tie(0);
	while (cin >> n) {
		x = n*n;
		solusi.clear();
		for (i = 1; i<= (int)sqrt(x) ; i++) {
			if (x%i==0) {
				j = (x/i);
				solusi.push_back(make_pair(max(i,j)+n,min(i,j)+n));
			}
		}
		sort(solusi.begin(),solusi.end(),comp);
		cout << solusi.size() << endl;
		for (i = 0 ; i <solusi.size() ; i++) {
			cout << 1 << '/' << n << " = " << 1 << '/' << solusi[i].first << " + " << 1 << '/' 
				<< solusi[i].second << endl;
		}
	}
	return 0;
}