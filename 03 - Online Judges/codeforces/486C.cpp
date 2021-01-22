#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int n, p;
string s;

int f(char a, char b){
	int n1 = (int)a-'a';
	int n2 = (int)b-'a';
	return min(abs(n1-n2), abs(26-abs(n1-n2)));
}

int ganjil(){
	int ans = 0;
	if (p == n/2) {
		int lst = n/2;
	//	cout << "Aa\n";
		for (int i = p-1; i >= 0; i--) {
			if (s[i] != s[n-1-i]) {
				ans += f(s[i], s[n-1-i]);
				ans += lst - i;
				lst = i;
			}	
		}
		return ans;
	}
	else {
		if (p > n/2) p = n-1-p;
		//jalan ke kiri
		vector<int> kiri,kanan;
		int le = 0;
		int cl = 0;
		for (int i = p; i>=0;i--) {
			if (s[i] != s[n-1-i]) {
				kiri.pb(i);
				cl += f(s[i], s[n-1-i]);
				if (kiri.size() == 1) le += p - i;
				else le += kiri[(int)kiri.size()-2]-kiri[(int)kiri.size()-1];
			}
		}
		//jalan ke kanan
		int ri = 0;
		int cr = 0;
		for (int i = p+1; i < n/2; i++) {
			if (s[i] != s[n-1-i]) {
				kanan.pb(i);
				cr += f(s[i], s[n-1-i]);
				if (kanan.size()==1) ri += i - p;
				else ri += kanan[(int)kanan.size()-1] - kanan[(int)kanan.size()-2];
			}
		}
		return (cl + cr + min(ri, le) + ri + le);
	}
}

int genap(){
	if (p >= n/2) p = n-1-p;
	vector<int> kiri,kanan;
		int le = 0;
		int cl = 0;
		for (int i = p; i>=0;i--) {
			if (s[i] != s[n-1-i]) {
				kiri.pb(i);
				cl += f(s[i], s[n-1-i]);
				if (kiri.size() == 1) le += p - i;
				else le += kiri[(int)kiri.size()-2]-kiri[(int)kiri.size()-1];
			}
		}
		//jalan ke kanan
		int ri = 0;
		int cr = 0;
		for (int i = p+1; i < n/2; i++) {
			if (s[i] != s[n-1-i]) {
				kanan.pb(i);
				cr += f(s[i], s[n-1-i]);
				if (kanan.size()==1) ri += i - p;
				else ri += kanan[(int)kanan.size()-1] - kanan[(int)kanan.size()-2];
			}
		}
		return (cl + cr + min(ri, le) + ri + le);
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> p;
	cin >> s;
	p--;
	if (n%2 == 1) cout << ganjil() << '\n';
	else cout << genap() << '\n';
	return 0;
}