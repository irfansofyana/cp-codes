#include <bits/stdc++.h>
using namespace std;

string dummy,s,ans;
int n,q,i,j,bil;
int x,y,awal;
vector<pair<int,int> > renj;

int binser(int l,int r) {
	int mid = (l+r)/2;
	if (l > r) return -1;
	else if (bil >= renj[mid].first && bil <= renj[mid].second) return mid;
	else if (bil < renj[mid].first) return binser(l,mid-1);
	else if (bil > renj[mid].second) return binser(mid+1,r);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> dummy ;
	cin >> n >> q;
	cin >> s;
	i = 1;
	ans = ans+s[0];
	if (i==(int)s.size()) renj.push_back(make_pair(0,0));
	while (i < s.size() ){
		if (s[i]==s[i-1]) {
			j = i;
			while(s[j]==s[i] && j < s.size() ) {j++;}
			i = j; // yang beda
			//cout << awal << " " << i-1 << '\n';
			renj.push_back(make_pair(awal,i-1));
			ans = ans+s[i];
			awal = i;
			if (i+1==(int)s.size()) renj.push_back(make_pair(awal,i));
			i++;
		}
		else {
			ans = ans+s[i];
			//cout << awal << " " << i-1 << '\n';
			renj.push_back(make_pair(awal,i-1));
			awal = i;
			if (i+1==(int)s.size()) renj.push_back(make_pair(awal,i));
			i++;
		}
	}
	/*cout << ans << '\n';
	for (i = 0 ; i < renj.size(); i++){
		cout << renj[i].first << " " << renj[i].second << endl;
	}*/
	while (q--) {
		cin >> x >> y;
		x--; y--;
		int mm,aa;
		bil = x;
		mm = binser(0,(int)renj.size()-1);
		bil = y;
		aa = binser(0,(int)renj.size()-1);
		cout << aa-mm+1 ;
		if (aa-mm+1 < 10) {
			cout << " " << ans.substr(mm,aa-mm+1) << '\n';
		}
		else cout << '\n';
	}
	return 0;
}