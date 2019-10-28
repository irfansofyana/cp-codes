#include <bits/stdc++.h>
using namespace std;

int n,i,j,temp,k;
int frek[15],smt[15];
vector<vector<int> > muncul;
string s;
string nama[250];

int main() {
	cin.tie(0);
	cin >> s;
	muncul.assign(1000,vector<int> ());
	for (i = 0 ; i < s.size() ; i++) {
		muncul[s[i]-'0'].push_back(i);
	}
	/*for (i = 0 ; i <= 9 ; i++) {
		for (j = 0 ; j<muncul[i].size() ; j++) {
			cout << muncul[i][j] << " ";
		}
		cout << endl;
	}*/
	for (i = 0 ; i < s.size() ; i++) {
		frek[s[i]-'0']++;
	}
	if (frek[0]>=1 || frek[8]>=1) {
		puts("YES");
		if (frek[0]>=1 )puts("0");
		else puts("8");
		return 0;
	}
	else {
		j = 0 ;
		for (i = 8 ; i <= 992 ; i+= 8) {
			nama[j] = "";
			temp = i;
			while (temp>0) {
				nama[j] = char((temp%10)+'0')+nama[j];
				temp/=10;
			}
			j++;
		}
		for (i = 0 ; i < j ; i++) {
			memset(smt,0,sizeof smt);
			for (k = 0 ; k < nama[i].size() ; k++) {
				smt[nama[i][k]-'0']++;
			}
			for (k = 0 ; k<= 9 ; k++) {
				if (smt[k]>frek[k]) break;
			}
			if (k==10) {
				if (nama[i].size()==3) {
					for (int z = 0 ; z<muncul[nama[i][0]-'0'].size() ; z++) {
						for (int zz = 0 ; zz<muncul[nama[i][1]-'0'].size(); zz++) {
							for (int zzz = 0 ; zzz < muncul[nama[i][2]-'0'].size(); zzz++) {
								if (muncul[nama[i][0]-'0'][z] < muncul[nama[i][1]-'0'][zz] &&
									muncul[nama[i][0]-'0'][z] < muncul[nama[i][2]-'0'][zzz] &&
									muncul[nama[i][1]-'0'][zz] < muncul[nama[i][2]-'0'][zzz]) {
										puts("YES");
										cout << nama[i] << endl;
										return 0;
								}
							}
						}
					}
				}
				else {
					for (int z = 0 ; z<muncul[nama[i][0]-'0'].size() ; z++) {
						for (int zz = 0 ; zz < muncul[nama[i][1]-'0'].size();zz++) {
							if (muncul[nama[i][0]-'0'][z]<muncul[nama[i][1]-'0'][zz]) {
								puts("YES");
								cout << nama[i] << endl;
								return 0;
							}
						}
					}
				}
			}
		}
		puts("NO");
		return 0;
	}
}