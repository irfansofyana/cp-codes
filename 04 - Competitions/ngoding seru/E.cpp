#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;

bool cek(string s){
	bool gede = false, kecil = false , angka = false , bukan = false;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]>='A' && s[i]<='Z') gede = true;
		else if (s[i]>='a' && s[i]<='z') kecil = true;
		else if (s[i]>='0' && s[i]<='9') angka = true;
		else bukan = true;
	}
	if (s.size()>=8 && gede && kecil && angka && bukan) return true;
	return false;
}

bool cek1(string s) {
	int temp = 0;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]>='A' && s[i]<='Z') temp++;
		else if (s[i]>='a' && s[i]<='z') temp++;
	}
	if (temp>12) return true;
	return false;
}

int main(){
	cin >> s;
	if (cek(s)) puts("Kuat");
	else if (cek1(s)) puts("AgakKuat");
	else puts("Lemah");
	return 0;
}