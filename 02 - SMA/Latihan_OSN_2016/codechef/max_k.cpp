#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,i,j,m;
ll arr[1000005];
ll sum[1000005];
vector<ll> A;

bool comp(ll a,ll b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 1 ; i <= n ; i++){
		cin >> arr[i];
		sum[i] = sum[i-1] + arr[i];
	}
	for (i = 1 ; i <= n ; i++) {
		for (j = i ; j <= n ; j++) {
			A.push_back(sum[j]-sum[i-1]);
		}
	}
	sort(A.begin(),A.end(),comp);
	for (i = 0 ; i < min(m,(ll)A.size()); i++){
		cout << A[i] ;
		cout << (i==(ll)min(m,((ll)A.size()))-1 ? '\n' : ' ');
	}
	return 0;
}