#include <bits/stdc++.h>
using namespace std;

string s,t;
int n,i,j,benar,salah;
int kecil1[30],besar1[30],kecil2[30],besar2[30];

int main(){
	cin.tie(0);
	cin >> s >> t;
	for (i = 0 ; i < t.size(); i++) {
		if (t[i]>='a' && t[i]<='z') kecil1[t[i]-'a']++;
		else besar1[t[i]-'A']++;
	}
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]>='a' && s[i]<='z') kecil2[s[i]-'a']++;
		else besar2[s[i]-'A']++;
	}
	for (i = 0;i < 26; i++) {
		if (kecil2[i]>=kecil1[i]) {
			salah+= kecil2[i]-kecil1[i];
			benar+= kecil1[i];
		}
		else benar+=kecil2[i];
	}
	for (i = 0 ; i < 26 ; i ++) {
		if (besar2[i]>=besar1[i]) {
			salah+= besar2[i]-besar1[i];
			benar+= besar1[i];
		}
		else benar+=besar2[i];
	}
	cout << benar << " " << s.size() -benar<< endl;
	return 0;
}