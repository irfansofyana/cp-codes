#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
string arr[35];

bool vokal(char c){
	if (c == 'a' || c== 'i' || c == 'u' || c=='e' || c=='o') return true;
	return false;
}

bool cek(string a,string b){
	int i,j;
	map<string,bool> mep;
	for (i = 0 ; i < a.size() ; i++) {
		string tmp = "";
		int vok = 0,kon = 0;
		tmp = tmp + a[i];
		if (vokal(a[i])) vok++;
		else kon++;
		for (j = 1 ; j < 4 ; j++) {
			if (i + j < a.size()) {
				tmp = tmp + a[i+j];
				if (vokal(a[i+j])) vok++;
				else kon++;
				if (vok >= 1 && kon >= 1) mep[tmp] = true;
			}
			else break;
		}
	}
	for (i = 0 ; i < b.size() ; i++) {
		string tmp = "";
		int vok = 0,kon = 0;
		tmp = tmp + b[i];
		if (vokal(b[i])) vok++;
		else kon++;
		for (j = 1 ; j < 4 ; j++) {
			if (i + j < b.size()) {
				tmp = tmp + b[i+j];
				if (vokal(b[i+j])) vok++;
				else kon++;
				if (vok >= 1 && kon >= 1) {
					if (mep[tmp]) return true;
				}
			}
			else break;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) 
			cin >> arr[i];
		int ans = 0;
		for (i = 0 ; i < n-1 ; i++) {
			for (j = i+1; j < n ; j++) {
				if (cek(arr[i],arr[j])) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
