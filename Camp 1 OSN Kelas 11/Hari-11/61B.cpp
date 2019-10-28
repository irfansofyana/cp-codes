#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string a,b,c,aa,bb,cc,A[3];
string s,temp,ss;
vector<string> kol;
bool ans;

bool isAlfa(char c){
	if ((c>='a' && c<='z') || (c>='A' && c<='Z')) return true;
	return false;
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin >> a >> b >> c;
	aa = ""; bb=""; cc="";
	for (i = 0 ; i < a.size(); i++) {
		if (isAlfa(a[i])) {
			if (a[i]>='A' && a[i]<='Z') aa = aa+char((int)a[i]+32);
			else aa = aa+a[i];
		}
	}
	for (i = 0 ; i < b.size() ; i++) {
		if (isAlfa(b[i])) {
			if (b[i]>='A' && b[i]<='Z') bb = bb+char((int)b[i]+32);
			else bb = bb+b[i];
		}
	}
	for (i = 0 ; i < c.size() ; i++) {
		if (isAlfa(c[i])) {
			if (c[i]>='A' && c[i]<='Z') cc = cc+char((int)c[i]+32);
			else cc = cc+c[i];
		}
	} A[0] = aa; A[1] = bb; A[2] = cc;
	temp = ""; temp = temp+A[0]; temp = temp+A[1]; temp = temp+A[2]; kol.push_back(temp);
	temp = ""; temp = temp+A[0]; temp = temp+A[2]; temp = temp+A[1]; kol.push_back(temp);
	temp = ""; temp = temp+A[1]; temp = temp+A[0]; temp = temp+A[2]; kol.push_back(temp);
	temp = ""; temp = temp+A[1]; temp = temp+A[2]; temp = temp+A[0]; kol.push_back(temp);
	temp = ""; temp = temp+A[2]; temp = temp+A[1]; temp = temp+A[0]; kol.push_back(temp);
	temp = ""; temp = temp+A[2]; temp = temp+A[0]; temp = temp+A[1]; kol.push_back(temp);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s; ss=""; ans = false;
		for (j = 0; j < s.size(); j++) {
			if (isAlfa(s[j])){
				if (s[j]>='A' && s[j]<='Z') ss = ss+char((int)s[j]+32);
				else ss = ss+s[j];
			}
		}
		//cout << ss << endl;
		for (j = 0 ; j < kol.size(); j++) {
			if (kol[j]==ss) {
				puts("ACC");
				ans = true; break;
			}
		}
		if (!ans) puts("WA");
	}
	return 0;
}