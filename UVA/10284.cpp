#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int i,j,k,awal,akhir;
int idx,idy,ans;
string s,tmp;
char arr[10][10];

inline bool cek(int x,int y){
	return (x >= 0 && x < 8 && y >= 0 && y < 8 && arr[x][y] == '0');
}

inline void jelajah(){
	int it,itt;
	for (it = 0 ; it < 8 ; it++) {
		for (itt = 0 ; itt < 8 ; itt++) {
			if (arr[it][itt] >= 'A' && arr[it][itt] <= 'Z') {
				if (arr[it][itt] == 'P') {
					if (cek(it-1,itt-1)) arr[it-1][itt-1] = '.';
					if (cek(it-1,itt+1)) arr[it-1][itt+1] = '.';
				} 
				else if (arr[it][itt] == 'R') {
					for (i = it-1; i >= 0 ; i--) if (cek(i,itt)) arr[i][itt] = '.';
					for (i = it+1; i < 8 ; i++) if (cek(i,itt)) arr[i][itt] = '.';
					for (i = itt-1; i >= 0 ; i--) if (cek(it,i)) arr[it][i] = '.';
					for (i = itt + 1; i < 8 ; i++) if (cek(it,i)) arr[it][i] = '.';
				}
				else if (arr[it][itt] == 'N') {
					if (cek(it-1,itt+2)) arr[it-1][itt+2] = '.';
					if (cek(it-1,itt-2)) arr[it-1][itt-2] = '.';
					if (cek(it-2,itt-1)) arr[it-2][itt-1] = '.';
					if (cek(it-2,itt+1)) arr[it-2][itt+1] = '.';
					if (cek(it+1,itt-2)) arr[it+1][itt-2] = '.';
					if (cek(it+1,itt+2)) arr[it+1][itt+2] = '.';
					if (cek(it+2,itt-1)) arr[it+2][itt-1] = '.';
					if (cek(it+2,itt+1)) arr[it+2][itt+1] = '.';
				}
				else if (arr[it][itt] == 'B') {
					
				}
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (cin >> s) {
		awal = 0; akhir = s.find('/', awal);
		idx = idy = 0; memset(arr, '0', sizeof arr);
		while (akhir >= 0 && akhir < s.size()) {
			tmp = s.substr(awal, akhir-awal);
			idy = 0;
			for (i = 0 ; i < tmp.size(); i++) {
				if (tmp[i] >= '1' && tmp[i] <= '8') {
					idy += tmp[i]-'0';
				}
				else {
					arr[idx][idy] = tmp[i];
					idy++;
				}
			}
			idx++;
			awal = akhir + 1; akhir = s.find('/', awal);
		}
		idy = 0;
		tmp = s.substr(awal, (int)s.size()-awal);
		for (i = 0 ; i < tmp.size(); i++) {
			if (tmp[i] >= '1' && tmp[i] <= '8') {
				idy += tmp[i]-'0';
			}
			else {
				arr[idx][idy] = tmp[i];
				idy++;
			}
		}
		ans = 0;
			/*	for (i = 0 ; i < 8; i++) {
			for (j = 0 ; j < 8 ; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
			}*/
		jelajah();
	}
	return 0;
}
