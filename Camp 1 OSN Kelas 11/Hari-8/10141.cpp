#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,k,makss,tc;
double harga,maks;
string nama,ans,temp;
bool pertama;
vector<string> jaw;

int main(){
	cin.tie(0);
	pertama = true;
	while (cin >> n >> m && n!=0 && m!=0) {
		getchar();
		for (i = 0; i < n ; i++) {
			getline(cin,nama);
		}
		cout << nama << endl;
		for (i = 0; i < m ; i++) {
			getline(cin,nama);
			cin >> harga >> k;
			getchar();
			for (j = 0 ; j<k ; j++) {
				getline(cin,temp);
			}
			if (i==0) {
				ans = nama; makss = k; maks = harga;
			}
			else {
				if (k==makss && harga>maks) {ans = nama; makss = k; maks = harga;}
				else if (k>makss) {ans = nama; makss = k; maks = harga;}
 			}
		}
		jaw.push_back(ans);
	}
	for (i = 0; i < jaw.size() ; i++) {
		cout << "RFP" << " #" << i+1 << endl;
		cout << jaw[i] << endl << endl;
	}
	return 0;
}