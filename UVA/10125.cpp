#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
#define pb push_back
#define mp make_pair
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<pair<ll,pll> > vplll;

ll n,i,j,idx,ans;
ll A[1005];
vplll himp1,himp2;

bool comp(ll a,ll b){
	return a>b;
}

ll bs(ll awal,ll akhir,ll target) {
	ll mid = (awal+akhir)/2;
	if (awal>akhir) return -1;
	else if (himp1[mid].first==target) return mid; 
	else if (himp1[mid].first > target) return bs(awal,mid-1,target);
	else if (himp1[mid].first < target) return bs(mid+1,akhir,target);
}

bool cek(pair<ll,pll> a, pair<ll,pll> b) {
	ll t1,t2,t3,t4;
	t1 = a.second.first; t2 = a.second.second; 
	t3 = b.second.first; t4 = b.second.second;
	if (t1==t2 || t1==t3 || t1==t4 || t2==t3 || t2==t4 || t3==t4) return false;
	return true;
}

bool comp1(pair<ll,pll> a, pair<ll,pll> b) {
	return a.first < b.first;
}

int main(){
	OPTIMASI
	while (cin >> n && n>0) {
		for (i = 0 ; i < n; i++) cin >> A[i];
		sort(A,A+n);
		himp1.clear();
		for (i = 0 ; i < n; i++) {
			for (j = i+1 ; j < n; j++) {
				himp1.pb(mp(A[i]+A[j],mp(i,j)));
			}
		}
		himp2.clear();
		sort(A,A+n,comp);
		for (i = 0 ; i < n ; i++) {
			for (j = i+1 ; j < n ; j++) {
				himp2.pb(mp(A[i]-A[j],mp(n-1-i,n-1-j)));
				himp2.pb(mp(A[j]-A[i],mp(n-1-j,n-1-i)));
			}
		}
		ans = -3000000000000000;
		/*for (i = 0 ; i < himp1.size(); i++) {
			cout << himp1[i].first << " " << himp1[i].second.first << " " << himp1[i].second.second << endl;
		}
		for (i = 0 ; i < himp2.size(); i++) {
			cout << himp2[i].first << " " << himp2[i].second.first << " " << himp2[i].second.second << endl;
		}*/
		sort(himp1.begin(),himp1.end(),comp1);
		for (i = 0 ; i < himp2.size(); i++) {
			if (bs(0,(ll)himp1.size()-1,himp2[i].first)!=-1) { //cek di himp1 
				idx = bs(0,(ll)himp1.size()-1,himp2[i].first); //idx muncul nya himp2[i].first di himp1;
				//cout << "masuk sini " << idx << endl; 
				j = idx-1;
				while (himp1[j].first==himp2[i].first && j>=0) {
					if (cek(himp1[j],himp2[i])) ans = max(ans,himp2[i].first+A[n-1-himp2[i].second.second]);
					j--;
				}
				j = idx;
				if (cek(himp1[j],himp2[i])) ans = max(ans,himp2[i].first+A[n-1-himp2[i].second.second]);
				j = idx+1;
				while (himp1[j].first==himp2[i].first && j < himp1.size()) {
					if (cek(himp1[j],himp2[i])) ans = max(ans,himp2[i].first+A[n-1-himp2[i].second.second]);
					j++;
				}
			}
		}
		if (ans==-3000000000000000) cout << "no solution" << endl;
		else cout << ans << endl;
	}
	return 0;
}