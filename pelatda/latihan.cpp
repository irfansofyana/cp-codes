#include <bits/stdc++.h>
using namespace std;

string s[100];
string tanya;
int i,j;

string ubah(int k) {
	stringstream ss;
	ss<<k;
	return ss.str();
}
string jumlah(string a,string b){
	string temp,ans="";
	int simpan = 0;
	if (a.size()>=b.size()){
		temp = b;
		for (int z=0;z<a.size()-b.size();z++) 
			temp = '0'+temp;
		b = temp;
	}
	else {
		temp = a;
		for (int z=0;z<b.size()-a.size();z++)
			temp = '0'+temp;
		a = temp;
	}
	simpan = 0;
	for (int z=a.size()-1;z>=0;z--) {
		if (z!=0) ans = char((a[z]-'0'+b[z]-'0')%10+simpan+48)+ans;
		else if (z==0) {
			ans = ubah(a[z]-'0'+b[z]-'0'+simpan)+ans; 
		}
		simpan += (a[z]-'0'+b[z]-'0')/10;
	}
	
	return ans;
}
void isi(){
	s[1] = '0';
	s[2] = '1';
	for (i=3;i<=40;i++) {
		s[i] = jumlah(s[i-1],s[i-2]);
	}
}

int main(){
	string a,b;
	isi();
	cin >> a >> b;
	cout<<jumlah(a,b)<<endl;
	//for (i=1;i<=10;i++) 
	//	cout<<s[i]<<endl;
}
