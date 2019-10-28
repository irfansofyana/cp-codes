#include <bits/stdc++.h>
using namespace std;

long long n,d,m,l,temp;
long long i,j,langkah,prev;
vector<pair<long long,long long> > A;

int main(){
	cin.tie(0);
	cin >> n >> d >> m >> l;
	for (i = 0 ; i < n ; i++) {
		A.push_back(make_pair((i)*m,(i)*m+l));
	}
	for (i = 0 ; i < n-1 ; i++) {
		langkah = ((i*m+l)/d)+1;
		temp = d*langkah;
		if (temp<A[i+1].first) {
			cout << temp << endl;
			return 0;
		}
	}
	langkah = (A[n-1].second/d)+1;
	cout << d*langkah << endl;
	return 0;
}