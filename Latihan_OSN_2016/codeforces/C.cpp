#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;

ll n,m,i,j;

struct paket{
	ll idx;
	ll satu,dua;
};

paket A[200005];
map<ll,ll> mep;
ll audio[200005];
ll subtitel[200005];

bool comp(paket a,paket b){
	if (a.satu == b.satu) return a.dua > b.dua;
	return a.satu > b.satu;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++){
		ll x;
		cin >> x;
		mep[x]++;
	}
	cin >> m;
	for (i = 0 ; i < m ; i++) {
		cin >> audio[i];
	}
	for (i = 0 ; i < m ; i++){
		cin >> subtitel[i];
	}
	for (i = 0 ; i < m ; i++) {
		A[i].idx = i+1;
		A[i].satu = mep[audio[i]];
		A[i].dua = mep[subtitel[i]];
	}
	sort(A,A+m,comp);
	cout << A[0].idx << '\n';
	return 0;
}