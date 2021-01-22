#include <bits/stdc++.h>
using namespace std;

string f[2017];
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

int main(){
	f[1] = "1"; f[2] = "1";
	for (i = 3 ; i <= 2016; i++) {
		f[i] = tambah(f[i-1],f[i-2]);
	}
	int ans = 0;
	for (i = 0 ; i < f[2016].size(); i++){
		ans += f[2016][i]-'0';
	}
	cout << ans << '\n';
}