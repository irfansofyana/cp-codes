#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
struct paket{
	int nomor,banyak;
	vector<int> bil ;
};

int n,tc,i,j,smt,z,t;
int A[3][1005],B[10005],c[3];
paket ans[3];

bool comp(paket a,paket b){
	if (a.banyak==b.banyak) return a.nomor<b.nomor;
	return a.banyak>b.banyak;
}

int main(){
	_
	cin >> tc;
	while (tc--) {
		memset(B,0,sizeof B);
		for (i = 0 ; i < 3 ; i++) {
			cin >> c[i];
			for (j = 0 ; j < c[i] ; j++) {
				cin >> A[i][j];
				B[A[i][j]]++;
			}
		}
		for (i = 0 ; i < 3 ; i++) {
			smt = 0; ans[i].bil.clear();
			for (j = 0; j < c[i] ; j++) {
				if (B[A[i][j]]==1) {
					smt++;
					ans[i].bil.push_back(A[i][j]);
				}
			}
			ans[i].nomor = i+1; ans[i].banyak = smt;
			sort(ans[i].bil.begin(),ans[i].bil.end());
		}
		sort(ans,ans+3,comp);
		cout << "Case " << "#" << ++t << ':' << endl;
		if (ans[0].banyak==ans[1].banyak && ans[1].banyak==ans[2].banyak) {
			for (i = 0 ; i < 3 ; i++) {
				cout << ans[i].nomor << " " << ans[i].banyak ;
				if (ans[i].banyak>0) cout << " ";
				else cout << endl;
				for (j = 0 ; j < ans[i].banyak ; j++) {
					cout << ans[i].bil[j];
					if (j!=ans[i].banyak-1) cout << " ";
					else cout << endl;
				}
			}
		}
		else {
			if (ans[0].banyak==ans[1].banyak) {
				for (i = 0 ; i < 2 ; i++) {
					cout << ans[i].nomor << " " << ans[i].banyak ;
					if (ans[i].banyak>0) cout << " ";
					else cout << endl;
					for (j = 0 ; j < ans[i].banyak ; j++) {
						cout << ans[i].bil[j];
						if (j!=ans[i].banyak-1) cout << " ";
						else cout << endl;
					}
				}	
			}
			else {
				i = 0;
				cout << ans[i].nomor << " " << ans[i].banyak ;
				if (ans[i].banyak>0) cout << " ";
				else cout << endl;
				for (j = 0 ; j < ans[i].banyak ; j++) {
					cout << ans[i].bil[j];
					if (j!=ans[i].banyak-1) cout << " ";
					else cout << endl;
				}
			}
		}
	}
	return 0;
}