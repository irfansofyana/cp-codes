#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int n,m,i,j;

string tambah(string aa,string bb){
	int butuh = max((int)aa.size(),(int)bb.size())-min((int)aa.size(),(int)bb.size());
	int it,itt;
	string ans = "";
	if (aa.size()<bb.size()) {
		for (it = 0 ; it < butuh; it++)
			aa = '0'+aa;
	}
	else {
		for (it = 0 ; it < butuh; it++) 
			bb= '0'+bb;
	}
	itt = 0;
	for (it = ((int)aa.size())-1; it>=0 ; it--) {
		ans = char((itt+((int)aa[it]-'0')+((int)bb[it]-'0'))%10+'0')+ans;
		itt = (itt+((int)aa[it]-'0')+((int)bb[it]-'0'))/10;
	}
	if (itt!=0) ans = char(itt+'0')+ans;
	return ans;
}

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int main(){
	s1 = "";
	for (i = 0 ; i <= 2016; i+=2){
		s1 = s1+ubah(i);	
	}
	s2 = "";
	for (i = 1 ; i <= 2017 ; i+=2) {
		s2 = s2 + ubah(i);
	}
	string res = tambah(s1,s2);
	int ans = 0;
	for (i = 0 ; i < res.size(); i++){
		ans += res[i]-'0';
	}
	cout << ans << '\n';
}