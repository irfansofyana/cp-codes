#include <bits/stdc++.h>
using namespace std;

string s;
int n,m,i,j;
int prefix[100005];
int ans,tmp,kecil,besar;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			prefix[i+1] = prefix[i] + 1;
		}
		else prefix[i+1] = prefix[i];
	}
	ans = (int)1e9;
	for (i = 0 ; i <= (int)s.size(); i++){
		if (i == 0) {
			//besar = 0, kecil = (int)s.size()
			kecil = prefix[(int)s.size()];	//besar jadi kecil
			ans = min(ans,kecil);
		}
		else {
			//besar : 0-i, kecil : i+1 - ((int)s.size()-1)
			besar = i-prefix[i];
			tmp = prefix[(int)s.size()]-prefix[i];
			ans = min(ans,besar + tmp);
		}
	}
	cout << ans << '\n';
	return 0;
}