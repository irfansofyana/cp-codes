#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int i,j;
int spasi,besar,kecil,lain;
string s;

int main(){
	OPTIMASI
	cin >> s;
	for (i = 0 ; i < s.size(); i++) {
		if (s[i]>='a' && s[i]<='z') kecil++;
		else if (s[i]>='A' && s[i]<='Z') besar++;
		else if (s[i]=='_') spasi++;
		else lain++;
	}
	cout << fixed << showpoint;
	cout << setprecision(16);
	cout << double(spasi)/(int)s.size() << '\n';
	cout << double(kecil)/(int)s.size() << '\n';
	cout << double(besar)/(int)s.size() << '\n';
	cout << double(lain) / (int)s.size() << '\n';
	return 0;
}