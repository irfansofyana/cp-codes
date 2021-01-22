#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;
int n,m,i,j;
vector<pi> A;
int tc,panjang;
int _last;

bool comp(pi a,pi b){
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> n , n > 0) {
		A.clear();
		for (i = 0 ; i < n ; i++) {
			int x,y;
			cin >> x >> y;
			A.pb(mp(x,y));
		}
		sort(A.begin(),A.end(),comp);
		panjang = A[0].first + A[0].second;
		_last = A[0].first;
		for (i = 1 ; i < A.size(); i++){
			_last += A[i].first ; 
			int temp = _last + A[i].second;
			panjang = max(panjang,temp);
		}
		cout << "Case " << ++tc << ": " << panjang << '\n';
	}
	return 0;
}