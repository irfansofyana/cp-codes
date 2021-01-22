#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

string s,temp;
int i,j,ans;
int t,tc;

bool cek(string s){
	int i=0,j=s.size()-1;
	while (i<=j) {
		if (s[i]!=s[j]) return false;
		else {i++; j--;}
	}
	return true;
}

int main(){
	OPTIMASI
	cin >> t;
	while (t--) {
		cin >> s;
		ans = 0;
		for (i = 0 ; i < s.size(); i++) {
			for (j = i; j < s.size(); j++){
				temp = s.substr(i,j-i+1);
				if (cek(temp)) ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}