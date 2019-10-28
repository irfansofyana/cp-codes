#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n,m,i,j,k,ans;
vector<ll> A,ambil;
ll temp,maks,idx;
map<ll,ll> mep;
vector<pair<ll,ll> > B;
ll dp[1000005];
ll dipilih[1000005];
ll arr[1000005];
ll MAKZ[1000005];

ll gcd(ll a,ll b){
	return (b==0?a:gcd(b,a%b));
}

ll kpk(ll a,ll b){
	return (a*b)/gcd(a,b);
}


bool comp(pair<ll,ll> a,pair<ll,ll> b){
	if (a.first==b.first) return a.second < b.second;
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		cin >> temp;
		mep[temp]++;
		if (mep[temp]==1) A.push_back(temp);
		B.push_back(make_pair(temp,i));
		arr[i] = temp;
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end(),comp);
	for (i = 0 ; i < A.size(); i++){
		if (i==0) {
			if (A[i] > m) {
				cout << 1 << " " << 0 << '\n';
				return 0;
			}
			else {
				MAKZ[i] = A[i];
				dp[i] = mep[A[i]];
				dipilih[i] = 0;
			}
		}
		else {
			ll smt = 0;
			dipilih[i] = i;
			MAKZ[dipilih[i]] = 1;
			for (j = 0 ; j <= i-1; j++) {
				if (kpk(MAKZ[j],A[i]) <= m) {
					if (dp[j] > smt) {
						smt = dp[j];
						dipilih[i] = j;
					}
				}
			}
			MAKZ[i] = kpk(MAKZ[dipilih[i]],A[i]);
			if (A[i] <= m) dp[i] = smt+mep[A[i]];
			else dp[i] = smt;
		}
	}
	//for (i = 0 ; i < A.size(); i++) cout << dp[i] << " " << dipilih[i] << '\n';
	//cout << '\n';
	for (j = 0 ; j < A.size() ; j++) {
		if (j==0) maks = dp[j];
		else {
			if (dp[j]>maks) {
				maks = dp[j];
				idx = j;
			}
		}
	}
	bool atos = false;
	do{
		if (atos) atos = false;
		if (idx==dipilih[idx]) atos = true;
		ambil.push_back(A[idx]);
		idx = dipilih[idx];
	}while(dipilih[idx]!=idx);
	if (!atos) ambil.push_back(A[idx]);
	//for (i = 0 ; i < ambil .size(); i++) cout << ambil[i] << " ";
	//cout << '\n';
	sort(ambil.begin(),ambil.end());
	j = 0; i = 0; vector<ll> take;
	while (i < B.size() && j < ambil.size() ) {
		if (B[i].first != ambil[j]) i++;
		else {
			take.push_back(B[i].second);
			k = i+1;
			while (k < B.size() && B[k].first == ambil[j]) {
				take.push_back(B[k].second);
				k++;
			}
			j++;
			i = k;
		}
	}
	sort(take.begin(),take.end());
	ans = 1;
	for (i = 0 ; i < take.size() ; i++ ){
		ans = kpk(ans,arr[take[i]]);
	}
	cout << ans << " " << take.size() << '\n';
	for (i = 0 ; i < take.size(); i++) {
		cout << take[i]+1 ;
		cout << ((i==(ll)take.size()-1) ? '\n' : ' ' ); 
	}
	return 0;
}