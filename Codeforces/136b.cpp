#include <bits/stdc++.h>
using namespace std;

long long a,c,i;
long long pangkat[30];
string ha,hc,ans;

void isi(){
	pangkat[0] = 1;
	for (int z=1;z<=20;z++) 
		pangkat[z] = pangkat[z-1]*3;
} 

string ubah(int k){
	string result="";
	while (k>0) {
		result = char((k%3)+'0')+result;
		k/=3;
	}
	return result;
}

long long cari(string s){
	long long result=0;
	for (int z=s.size()-1;z>=0;z--) {
		result += (s[z]-'0')*pangkat[s.size()-1-z];
	}
	return result;
}
int main(){
	cin.tie(0);
	isi();
	cin >> a >> c;
	ha = ubah(a); hc = ubah(c);
	if (ha.size()<=hc.size()) {
		string temp="";
		for (i=0;i<hc.size()-ha.size();i++)
			temp = temp+'0';
		ha = temp+ha;
	}
	else {
		string temp="";
		for (i=0;i<ha.size()-hc.size();i++)
			temp = temp+'0';
		hc = temp+hc;
	}
	ans = "";
	//cout << ha << " " << hc << endl;
	for (i=0;i<hc.size();i++) {
		if ((int)hc[i]>=(int)ha[i]) {
			ans = ans+char((int)hc[i]-(int)ha[i]+'0');
		}
		else if ((int)hc[i]<(int)ha[i]) {
			ans = ans+char((int)hc[i]+3-(int)ha[i]+'0');
		}
	}
	cout << cari(ans) << endl;
}
