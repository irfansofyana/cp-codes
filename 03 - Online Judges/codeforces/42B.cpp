#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j,k,idx,idy;
pair<int,int> cek,benteng[2],hitam,putih;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
char A[8][8];
bool bisa;

int main(){
	cin.tie(0);
	memset(A,'0',sizeof A);
	for (i=0;i<4;i++) {
		cin >> s;
		if (i==3) {
			hitam = make_pair(s[0]-'a',s[1]-'1');
			A[s[0]-'a'][s[1]-'1'] = 'H';	
		}
		else if (i<=1) {
			benteng[i] = make_pair(s[0]-'a',s[1]-'1');
			A[s[0]-'a'][s[1]-'1'] = 'B';
		}
		else {
			putih = make_pair(s[0]-'a',s[1]-'1');
			A[s[0]-'a'][s[1]-'1'] = 'P';
		}
	}
//	cout << putih.first <<" " << putih.second<<endl;
//	cout << hitam.first <<" " << hitam.second<<endl;
//	for (i=0;i<2;i++)
//		cout << benteng[i].first << " " << benteng[i].second << endl;
	for (i=0;i<8;i++) {
		idx = hitam.first+dx[i]; idy = hitam.second+dy[i];
		if (idx>=0 && idx<8 && idy>=0 && idy<8) {
			//cout << idx <<" "<<idy << endl;
			if (A[idx][idy]=='0'){
				for (j=0;j<2;j++) {
					bisa = false;
					for (k=benteng[j].first-1;k>=0;k--) {
						if (A[k][benteng[j].second]=='P') break;
						else if (k==idx && benteng[j].second==idy) {
							bisa = true;
							break;
						} 
					}
					for (k=benteng[j].first+1;k<8;k++) {
						if (A[k][benteng[j].second]=='P') break;
						else if (k==idx && benteng[j].second==idy) {
							bisa = true;
							break;
						}
					}
					for (k=benteng[j].second-1;k>=0;k--) {
						if (A[benteng[j].first][k]=='P') break;
						else if (benteng[j].first==idx && k==idy) {
							bisa = true;
							break;
						}
					}
					for (k=benteng[j].second+1;k<8;k++) {
						if (A[benteng[j].first][k]=='P') break;
						else if (benteng[j].first==idx && k==idy) {
							bisa = true;
							break;
						}
					}
					if (bisa) break;
				}
				if (j==2) {
					puts("OTHER");
					return 0;
				}
			}
			else if (A[idx][idy]=='B') {
				if (idx==benteng[0].first && idy==benteng[0].second) cek=benteng[1];
				else cek = benteng[0];
				bisa = false;
				for (j=cek.first-1;j>=0;j--) {
					if (A[j][cek.second]=='P') break;
					else if (j==idx && cek.second==idy) {
						bisa = true;
						break;
					}
				}
				for (j=cek.first+1;j<8;j++) {
					if (A[j][cek.second]=='P') break;
					else if (j==idx && cek.second==idy) {
						bisa = true;
						break;
					}
				}
				for (j=cek.second-1;j>=0;j--) {
					if (A[cek.first][j]=='P') break;
					else if (cek.first==idx && j==idy) {
						bisa = true;
						break;
					}
				}
				for (j=cek.second+1;j<8;j++) {
					if (A[cek.first][j]=='P') break;
					else if (cek.first==idx && j==idy) {
						bisa = true;
						break;
					}
				}
				if (!bisa) {
					puts("OTHER");
					return 0;
				}
			}
		}
	}
	puts("CHECKMATE");
	return 0;
}
