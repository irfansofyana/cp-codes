#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
string inp,s,a,b;
char op;

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

string kurang(string aa,string bb){
	int butuh = max((int)aa.size(),(int)bb.size())-min((int)aa.size(),(int)bb.size());
	int it,itt;
	string ans = "";
	if ((int)aa.size()<(int)bb.size()) {
		for (it = 0 ; it < butuh; it++)
			aa = '0'+aa;
	}
	else {
		for (it = 0 ; it < butuh; it++) 
			bb = '0'+bb;
	}
	//cout << aa << " " << bb << '\n';
	string besar,kecil; 
	if (aa>bb){
		besar = aa; kecil = bb;
	}
	else if (aa<bb){
		besar = bb; kecil = aa;
	}
	else return "0";
	bool hutang = false;
	for (it = besar.size()-1; it >= 0 ; it--) {
		int cc,dd;
		cc = (int)besar[it]-'0'; dd = (int)kecil[it]-'0';
		if (!hutang) {
			if (cc>=dd) ans = char(cc-dd+'0')+ans;
			else {
				hutang = true;
				ans = char(10+cc-dd+'0')+ans;
			}
		}
		else {
			if (cc>dd){
				hutang = false;
				ans = char(cc-1-dd+'0')+ans;
			}
			else {
				ans = char(cc+9-dd+'0')+ans;
			}
		}
	}
	for (it = 0 ; it < ans.size(); it++){
		if (ans[it]!='0') {
			ans.erase(0,it);
			break;
		}
	}
	if (aa<bb) ans = "-"+ans;
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> inp;
		for (i = 0; i < inp.size(); i++) {
			if (inp[i]=='+' || inp[i]=='-' || inp[i]=='*') {
				op = inp[i];
				break;
			}
		}
		a = inp.substr(0,i); b = inp.substr(i+1,inp.size()-(i+1));
		if (op=='+') {
			int ruang;
			string bes,k;
			//cout << tambah(a,b) << '\n';
			if ((int)a.size()<(int)b.size()+1) {
				ruang = (int)b.size()+1-(int)a.size();
				for (i = 0 ; i < ruang ; i++) cout << " "; cout << a << '\n';
				cout << '+' << b << '\n';
				for (i = 0 ; i < (int)b.size()+1 ; i++) cout << '-'; cout << '\n';
				for (i = 0 ; i < (int)b.size()+1-tambah(a,b).size(); i++) cout << " ";
				cout << tambah(a,b) << '\n';
			}
			else {
				cout << a << '\n';
				ruang = (int)a.size()-((int)b.size()+1);
				for (i = 0 ; i < ruang ; i++) cout << " "; cout << '+' << b << '\n';
				for (i = 0 ; i < a.size(); i++) cout << '-'; cout << '\n';
				cout << tambah(a,b) << '\n';
			}
		}
		else if (op=='-') {
			//cout << kurang(a,b) << '\n';
			int ruang;
			if ((int)a.size()<(int)b.size()+1) {
				ruang = (int)b.size()+1-(int)a.size();
				for (i = 0 ; i < ruang; i++) cout << " "; cout << a << '\n';
				cout << '-' << b << '\n';
				for (i = 0 ; i < (int)b.size()+1; i++) cout << '-'; cout << '\n';
				for (i = 0 ; i < (int)b.size()+1-(int)kurang(a,b).size(); i++) cout << " "; cout << kurang(a,b) << '\n'; 
			}
			else {
				ruang = (int)a.size()-(int)b.size()-1;
				cout << a << '\n';
				for (i = 0 ; i  < ruang ; i++) cout << " "; cout << '-' << b << '\n';
				for (i = 0 ; i < a.size(); i++) cout << "-"; cout << '\n';
				for (i = 0 ; i < (int)a.size()-(int)kurang(a,b).size(); i++) cout << " " ; cout << kurang(a,b) << '\n';
			}
		}
		else if (op=='*') {
			
		}
		if (t!=0) cout << '\n';
	}
	return 0;
}