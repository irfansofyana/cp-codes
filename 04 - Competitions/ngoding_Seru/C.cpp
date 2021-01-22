#include <bits/stdc++.h>
using namespace std;

int idx,spasi,n,i,j;
string s,temp,ans;

bool cek(string s){
	int it,angka;
	int kcl;
	angka = 0; kcl = 0;
	for (it = 0; it<s.size(); it++) {
		if (s[it]>='0' && s[it]<='9') angka++;	
		else if (s[it]>='a' && s[it]<='z') kcl++;
	}
	if (kcl>=3 && angka>=1) return true;
	return false;
}

int main(){
	getline(cin,s);
	spasi = s.find(" ",0);
	ans = "-1";
	while (spasi>=0 && spasi<s.size()) {
		temp = s.substr(idx,spasi-1-idx+1);
		//cout << temp << '\n';
		if (cek(temp)) {
			if (ans=="-1") ans = temp;
			else if ((int)temp.size()>(int)ans.size()) ans = temp;
		}
		idx = spasi+1;
		spasi = s.find(" ",idx);
	}
	temp = s.substr(idx,s.size()-1-idx+1);
	//cout << temp << '\n';
	if (cek(temp)) {
		if (ans=="-1") ans = temp;
		else if ((int)temp.size()>(int)ans.size()) ans = temp;
	}
	if (ans=="-1") cout << "NO" << '\n';
	else {
		cout << ans << '\n'; cout << ans.size() << '\n';
	}
	return 0;
}