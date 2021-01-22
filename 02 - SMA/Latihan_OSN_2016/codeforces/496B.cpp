#include <bits/stdc++.h>
using namespace std;

string s,awal;
int n,i,j;
int tambah;
vector<string> ans;
map<string,int> mep;
char temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	awal = s;
	for (i = 0 ; i < n ; i++){
		tambah = 10-((int)s[i]-'0');
		for (j = 0 ; j < n; j++){
			s[j] = char('0' + (((int)s[j]-'0'+tambah)%10));
		}
		for (int z = 0 ; z < n ; z++) {
			temp = s[n-1];
			s.erase((int)s.size() - 1,1);
			s = temp + s;
			mep[s]++;
			if (mep[s]==1) ans.push_back(s);
		}
		s = awal;
	}
	sort(ans.begin(),ans.end());
	cout << ans[0] << '\n';
	return 0;
}