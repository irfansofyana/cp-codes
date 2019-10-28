#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int t,n,i,j,x;
int dp[1000005];
string temp;

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

bool cek(string s){
	int d,b;
	d = 0; b = s.size()-1;
	while (d<=b) {
		if (s[d]!=s[b]) return false;
		else {d++; b--;}
	}
	return true;
}

int main(){
	OPTIMASI
	for (i = 1 ; i<= 1000000; i++) {
		temp = ubah(i);
		if (cek(temp)) x++;
		dp[i] = x;
	}
	int tc = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << "Kasus #" << ++tc << ": " << dp[n] << '\n';
	}
	return 0;
}