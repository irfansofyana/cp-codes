#include <bits/stdc++.h>
using namespace std;
struct paket{
	string nama;
	int mini,maks;
};

int TC,n,i,j,m;
paket A[10005];
int masuk,x,y,ans;
string s;

int main(){
	cin >> TC;
	for (int zz = 0 ; zz < TC ; zz++) {
		cin >> n;
		for (i = 0 ; i < n ; i++) {
			cin >> s >> x >> y;
			A[i].nama = s;
			A[i].mini = x; 
			A[i].maks = y;
		}
		cin >> m;
		for (i = 0 ; i < m ; i ++) {
			cin >> x;
			masuk = 0;
			for (j = 0 ; j < n ; j++) {
				if ((A[j].mini <= x) && (x <= A[j].maks)) {
					masuk++;
					ans = j;
				}
			}
			if (masuk==1) cout << A[ans].nama << endl;
			else cout << "UNDETERMINED" << endl;
		}
		if (zz!=TC-1) cout << endl; 
	}
	return 0;
}