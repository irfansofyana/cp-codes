#include <bits/stdc++.h>
using namespace std;

int m,q,i,j,_last;
string s,temp;
string arr[1005];

int beda(string a,string b){
	int ret = 0;
	for (int z = 0 ; z < a.size(); z++){
		ret += (a[z]==b[z] ? 0 : 1);
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> m >> q;
	for (i = 0 ; i < m ; i++) cin >> arr[i];
	while (q--) {
		cin >> s;
		int ans = 100000000;
		int idx;
		for (i = 0 ; i < m ; i++) {
			if (arr[i].size() < (int)s.size()) continue;
			else {
				int mini = 100000000;
				_last = 0; j = (int)s.size()-1;
				while (j < arr[i].size()){
					temp = arr[i].substr(_last,j-_last+1);
					mini = min(mini,beda(temp,s));
					_last++; j++;
				}
				if (ans==100000000) {
					ans = mini;
					idx = i+1;
				}
				else if (mini < ans) {
					idx = i+1;
					ans = mini;
				}
			}
		}
		cout << idx << '\n';
	}
	return 0;
}