#include <bits/stdc++.h>
using namespace std;

const int MAKSN = 105;

int n,a,b;
int arr[MAKSN][MAKSN];
int i,j,k;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
bool bisa;

bool cek(int x,int y){
	return (x >= 1 && x <= a && y >= 1 && y <= b);
}

void print(){
		int genap,ganjil;
		genap = 2; ganjil = 1;
		/*for (i = 1 ; i <= a ; i++) {
			for (j =1 ; j <= b ; j++){
				cout << arr[i][j];
				cout << (j == b ? '\n' : ' ');
			}
		}*/
		int tot = n;
		for (i = 1 ; i <= a ; i++) {
			for (j = 1 ; j <= b ; j++) {
				if (arr[i][j] == 2) {
					arr[i][j] = (genap > n ? 0 : genap);
					tot -= (arr[i][j] == 0 ? 0 : 1);
					if (genap <= n) genap += 2;
				}
				else {
					arr[i][j] = (ganjil > n ? 0 : ganjil);
					tot -= (arr[i][j] == 0 ? 0 : 1);
					if (ganjil <= n) ganjil += 2;
				}
			}
		}
		if (tot == 0) {
			for (i = 1 ; i <= a ; i++) {
				for (j =1 ; j <= b ; j++){
					cout << arr[i][j];
					cout << (j == b ? '\n' : ' ');
				}
			}
		}
		else bisa = false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> a >> b;
	memset(arr,-1,sizeof arr);
	bisa = true;
	if (n > a*b) {
		cout << -1 << '\n';
		return 0;
	}
	if (a == 1 && b == 1) {
		cout << 1 << '\n';
		return 0;
	}
	for (i = 1 ; i <= a ; i++) {
		for (j = 1 ; j <= b ; j++) {
			if (i == 1 && j == 1){
				 arr[i][j] = 2;
			}
			else {
				bool tmp = true;
				int nilai = 0;
				for (k = 0 ; k < 4 ; k++) {
					if (cek(i+dx[k],j+dy[k])){
						if (arr[i+dx[k]][j+dy[k]]!=-1 && tmp) {
							if (arr[i+dx[k]][j+dy[k]] == 2) nilai = 1;
							else nilai = 2;
							tmp = false;
						}
						else if (arr[i+dx[k]][j+dy[k]]!=-1) {
							int xx = (arr[i+dx[k]][j+dy[k]] == 1 ? 2 : 1);
							if (xx != nilai) bisa = false;
						}
					}
				}
				//cout << nilai << " ";
				arr[i][j] = nilai;
			}
			//cout << '\n';
		}
	}
	if (bisa) {
		print();
	}
	if (!bisa){
		bisa = true;
		memset(arr,-1,sizeof arr);
		for (i = 1 ; i <= a ; i++) {
			for (j = 1 ; j <= b ; j++) {
				if (i == 1 && j == 1) arr[i][j] = 1;
				else {
					bool tmp = true;
					int nilai = 0;
					for (k = 0 ; k < 4 ; k++) {
						if (cek(i+dx[k],j+dy[k])){
							if (arr[i+dx[k]][j+dy[k]]!=-1 && tmp) {
								if (arr[i+dx[k]][j+dy[k]] == 2) nilai = 1;
								else nilai = 2;
								tmp = false;
							}
							else if (arr[i+dx[k]][j+dy[k]]!=-1) {
								int xx = (arr[i+dx[k]][j+dy[k]] == 1 ? 2 : 1);
								if (xx != nilai) bisa = false;
							}
						}
					}
					arr[i][j] = nilai;
				}
			}
		}
		if (!bisa) cout << -1 << '\n';
		else print();
	}
	return 0;
}