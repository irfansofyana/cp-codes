#include <bits/stdc++.h>
using namespace std;

int n,i;
string s;

string ubah(int k){
	string res = "";
	while (k>0) {
		(k%2==0)?res = '0'+res : res = '1'+res;
		k/=2;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	s = ubah(n);
	vector<int> ans;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]=='1') ans.push_back((int)s.size()-i); 
	}
	for (i = 0 ; i < ans.size(); i++){
		cout << ans[i];
		(i==(int)ans.size()-1) ? cout << '\n' : cout << ' ';
	}
	return 0;
}