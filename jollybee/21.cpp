#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,tc,n,i,j;
map<string,bool> udah;
map<string,int> frek;
vector<string> s;

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> n;
		s.clear(); frek.clear();
		for (i = 0 ; i < n ; i++) {
			string st;
			cin >> st;
			sort(st.begin(),st.end());
			s.push_back(st);
			frek[st]++;
			udah[st] = false;
		} int ans = 0;
		for (i = 0 ; i < n ; i++) {
			if (!udah[s[i]]){
				udah[s[i]] = true;
				sort(s[i].begin(),s[i].end());
				ans += (frek[s[i]]*(frek[s[i]]-1))/2;
			} 
		} 
		cout << "Kasus #" << ++tc << ": " << ans << '\n';
	}
	return 0;
}