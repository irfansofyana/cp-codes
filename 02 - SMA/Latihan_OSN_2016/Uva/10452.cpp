#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

typedef pair<int,int> pi;

int t,i,j;
int n,m,idx;
char A[10][10];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
pi awal,akhir;
string s,langkah[105];

bool cek(int x,int y){
	return (x>=0 && x<n && y>=0 && y<m);
}

string pindah(int x){
	if (x==0 || x==1) return "forth";
	else if (x==2) return "right";
	else return "left";
}

void cari(int x,int y,int pos){
	if (pos==7) {
		for (int z =0 ; z < 7 ; z++){
			cout << langkah[z];
			cout << (z==6 ? '\n' : ' ');
		}
		return;
	}
	else {
		for (int z = 0 ; z < 4; z++) {
			if (cek(x+dx[z],y+dy[z])) {
				if (A[x+dx[z]][y+dy[z]]==s[pos]) {
					langkah[pos] = pindah(z);
					cari(x+dx[z],y+dy[z],pos+1);
				}
			}   
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (i = 0 ; i < n ; i++)
			for (j = 0 ; j < m ; j++){
				cin >> A[i][j];
				if (A[i][j]=='@')
					awal = mp(i,j);
				else if (A[i][j]=='#') 
					akhir = mp(i,j);
			}
		s = "IEHOVA#";
		idx = 0;
		cari(awal.first,awal.second,0);
	}
	return 0;
}