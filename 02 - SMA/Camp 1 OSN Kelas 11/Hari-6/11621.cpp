#include <bits/stdc++.h>
using namespace std;

vector<long long> a;
long long n,i,m,j,bisa,MAKS;
long long dua[50],tiga[50];

void isi(){
	dua[0] = 1; tiga[0] = 1;
	for (i = 1 ; i<=31 ; i++) dua[i] = dua[i-1]*2;
	for (i = 1 ; i<=26 ; i++) tiga[i] = tiga[i-1]*3;
 }
 
int main(){
	cin.tie(0);
	isi();
	for (i = 0 ; i <= 31 ; i++) {
		bisa = 2147483648/dua[i];
		for (j = 0 ; j <= 26 && tiga[j]<=bisa ; j++){
			a.push_back(dua[i]*tiga[j]);
		}
	}
	sort(a.begin(),a.end());
	while (cin >> m && m!=0) {
		for (i = 0 ; i < a.size() ; i++) {
			if (a[i]>=m) {
				cout << a[i] << endl;
				break;
			}
		}
	}
	return 0;
	}