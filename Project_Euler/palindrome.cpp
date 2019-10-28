#include <bits/stdc++.h>
using namespace std;

int n,i,j,kali,ans;
string temp;
bool cek_palindrome(string s) {
	int depan,akhir;
	depan = 0;
	akhir = s.size()-1;
	while (depan<=akhir) {
		if (s[depan]!=s[akhir]) return false;
		else {
			depan++;
			akhir--;
		}
	}
	return true;
}

string ubah(int k) {
	stringstream ss;
	ss<<k;
	return ss.str();
}

int main(){
	for (i=100;i<=999;i++) 
		for (j=100;j<=999;j++) {
			kali = i*j;
			if (cek_palindrome(ubah(kali)) && kali>ans) {
				ans = kali;
			}
		}
	cout << ans << endl;
}

