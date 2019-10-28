#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[55],B[55],temp[55];
string s;
int ans;

void solusi(int udah,int ukuran) {
	int idx,idxx;
	int temp[55];
	if (udah==k) {
		int maks = -1000000000;
		int mini = 1000000000;
		for (idxx = 0 ; idxx < ukuran; idxx++) {
			maks = max(maks,A[idxx]);
			mini = min(mini,A[idxx]);
		}
		ans = min(ans,maks-mini);
	}
	else {
		for (idx = 0 ; idx < ukuran-1; idx++) {
			//gabung A[idx] dengan A[idx+1]
			for (idxx = 0 ; idxx < ukuran ; idxx++) {
				temp[idxx] = A[idxx];
			}
			int jj = 0;
			for (idxx = idx + 2; idxx < ukuran; idxx++) {
				B[jj] = A[idxx];
				jj++;
			}
			A[idx] = A[idx]+A[idx+1];
			int kk = 1;
			for (idxx = 0 ; idxx < jj ; idxx++) {
				A[idx+kk] = B[idxx];
				kk++;
			}
			solusi(udah+1,ukuran-1);
			for (idxx = 0 ; idxx < ukuran ; idxx++) {
				A[idxx] = temp[idxx];
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	getline(cin,s);
	cin >> n >> k ;
	for (i = 0 ; i < n ; i++) cin >> A[i];
	ans = 2e9;
	solusi(0,n);
	cout << ans << '\n';
	return 0;
}