#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

struct paket{
	string asal,baru;
	int indeks;
};

int n,i,j,k;
int idx;
string s;
paket arr[1000005];

bool comp(paket aa, paket bb){
	//long long ta = 0;
	string a,b;
	a = aa.baru; b = bb.baru;
	int idxx = 0;
	while (idxx < a.size() && a[idxx] == '0') idxx++;
	a = a.substr(idxx, (int)a.size()-idxx);
	idxx = 0;
	while (idxx < b.size() && b[idxx] == '0') idxx++;
	b = b.substr(idxx, (int)b.size() - idxx);
	if (a == b) return aa.indeks < bb.indeks;
	return a < b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s;
		arr[i].asal = s;
		arr[i].baru = "";
		arr[i].indeks = i;
	}
	i = 1;
	while (1) {
		int tot = 0;
		for (j = 0 ; j < n ; j++) {
			string tmp = "";
			int nol = 0;
			s = arr[j].asal;
			for (k = 5 * i; k >= 1 + 5*(i-1); k--) {
				idx = (int)s.size() - k;
				if (idx >= 0 && idx < (int)s.size()) tmp = tmp + s[idx];
				else {
					tmp = '0' + tmp;
					nol++;
				}
			}
			if (nol == 5) tot++;
			arr[j].baru = tmp;
		}
		if (tot == n) {
			break;
		}
		else {
			sort(arr, arr + n, comp);
			for (j = 0 ; j < n; j++) {
				cout << arr[j].asal ;
				cout << (j == n-1 ? '\n' : ' ');
			}
			i++;
		}
	}
	return 0;
}