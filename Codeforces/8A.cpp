/*
	CODEFORCES PROBLEM : TRAIN&PETER(8A)
	AUTHOR : IRFAN SOFYANA PUTRA(cokguzel48)
*/

#include <bits/stdc++.h>
using namespace std;

string a,b,c,temp;
int i,idx;
bool depan,belakang;

int main(){
	ios_base::sync_with_stdio(false);
	cin >> a >> b >> c;
	if (a.size()<b.size()+c.size()) puts("fantasy");
	else {
		idx = a.find(b);
		if (idx>=0 && idx<a.size()) {
			temp = a.substr(idx+b.size(),a.size()-1-(idx+b.size())+1);
			if (temp.find(c)>=0 && temp.find(c)<temp.size()) depan = true;	
		}
		reverse(a.begin(),a.end());
		idx = a.find(b);
		if (idx>=0 && idx<a.size()) {
			temp = a.substr(idx+b.size(),a.size()-1-(idx+b.size())+1);
			if (temp.find(c)>=0 && temp.find(c)<temp.size()) belakang = true;
		}
		if (depan && belakang) puts("both");
		else if (depan || belakang) puts(depan==true?"forward":"backward");
		else puts("fantasy");
	}
	return 0;
} 
