#include <bits/stdc++.h>
using namespace std;

string s,a,b,hasil;
int n,i,j;
bool ada = false;


string sum(string a,string b){
	string temp,result;
	int simpanan,saved;
	int akhir = 0;
	temp = ""; result="";
	simpanan = 0;
	if (a.size()>b.size()){
		for (int z=0;z<a.size()-b.size();z++)
			temp = temp + '0';
		b = temp+b;
	}
	else if (a.size()<b.size()) {
		for (int z=0;z<b.size()-a.size();z++)
			temp = temp + '0';
		a = temp+a;
	}
	for (int z=a.size()-1;z>=1;z--) {
		saved = a[z]-'0'+b[z]-'0';
		result = char((saved%10)+48+simpanan)+result;
		simpanan += (saved/10);
	}
	akhir = a[0]-'0'+b[0]-'0'+simpanan;
	while (akhir>0) {
		result = char((akhir%10)+48) +result;
		akhir/=10;
	}
	return result;
}

string subtract(string a,string b){
	
}
int main(){
	cin >> n >> s;
	a=""; b="";
	ada = false;
	for (i=0;i<s.size();i++) {
		if (s[i]!='+' && s[i]!='-' && !ada) {
			a+=s[i];
		}
		else if (s[i]!='+' && s[i]!='-' && ada) {
			b+=s[i];
		}
		else if (s[i]=='+' || s[i]=='-') {
			if (s[i]=='+')	
				if (ada) {
					hasil = sum(sum(a,b),hasil);
					a="";
					b="";
				}
			ada = !ada;
		}
	}
	hasil = sum(sum(a,b),hasil);
	cout<<hasil<<endl; 
}
