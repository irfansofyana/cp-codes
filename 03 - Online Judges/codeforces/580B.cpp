#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define mp make_pair
using namespace std;

typedef pair<long long,long long> ii;
typedef vector<ii> vii;
typedef long long ll;

ll n,d,i,j,smt;
vii A;
ll x,y,ans,maks,mini;

bool comp(ii a,ii b){
	return a.first<b.first;
}

int main(){
	OPTIMASI
	cin >> n >> d;
	for (i = 0 ; i < n ; i++) {
		cin >> x >> y;
		A.push_back(mp(x,y));
	}
	sort(A.begin(),A.end(),comp);
	j = 0; smt = 0;
	for (i = 0 ; i < A.size(); i++) {
		smt += A[i].second;
		while (A[i].first-A[j].first>=d) {
			smt -= A[j].second;
			j++;
		}
		ans = max(ans,smt);
	}
	cout << ans << '\n';
	return 0;
}