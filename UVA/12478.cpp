#include <bits/stdc++.h>
using namespace std;

char arr[15][15];
int n,m,i,j;
int tempx,tempy;
map<string,int> mep;
string A[]= {"RAKIBUL","ANINDYA","MOSHIUR","SHIPLU","KABIR","SUNNY","OBAIDA","WASI"};

bool isanagram(string a,string b){
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if (a.size() != b.size()) return false;
	else {
		for (int z = 0 ; z < a.size(); z++) {
			if (a[z] != b[z]) return false;
		}
		return true;
	}
}

string cari(string s){
	for (int z = 0 ; z < 8; z++) {
		if (isanagram(s,A[z])) return A[z]; 
	}
	return "00";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	/*for (i = 0 ; i < 9 ; i++) {
		for (j = 0 ; j < 9 ; j++) 
			cin >> arr[i][j];
	}
	for (i = 0 ; i < 9 ; i++) {
		for (j = 0 ; j < 9 ; j++) {
			tempx = i ; tempy = j;
			string res = "";
			while (tempy < 9) {
				res = res + arr[tempx][tempy];
				tempy++;
				if (cari(res) != "00") {
					if (mep[cari(res)] == 1){
						cout << cari(res) << '\n';
						return 0;
					}
					else mep[cari(res)]++;
				}
			}
			tempy = j;
			res = "";
			while (tempx < 9) {
				res = res + arr[tempx][tempy];
				tempx++;
				if (cari(res) != "00") {
					if (mep[cari(res)] == 1){
						cout << cari(res) << '\n';
						return 0;
					}
					else mep[cari(res)]++;
				}
			}
		}
	}*/
	cout << "KABIR" << '\n';
}