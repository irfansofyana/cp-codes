#include <bits/stdc++.h>
using namespace std;
struct paket{
	int awal,akhir,jumlah;
};
int n,i,j;
int dp[1000];
int x,y,ans;
int r,q;
paket A[5005];

bool comp(paket a,paket b){
	if (a.awal==b.awal) return a.akhir<b.akhir;
	return a.awal<b.awal;
}

int main(){
	cin.tie(0);
	cin >> n;
	cin >> q >> r;	
	for (i=0;i<q;i++) {
		cin >> x >> y >> ans;
		A[i].awal = x;
		A[i].akhir = y;
		A[i].jumlah = ans;
	}
	sort(A,A+q,comp);
	//for (i=0;i<q;i++) 
	//	cout<<A[i].awal<<" "<<A[i].akhir<<endl;
	memset(dp,-1,sizeof dp);
	for (i=0;i<q;i++) {
		if (A[i].awal==0) dp[A[i].akhir] = A[i].jumlah;
		else {
			if (dp[A[i].awal-1]==-1 && dp[A[i].akhir]!=-1) dp[A[i].awal-1] = dp[A[i].akhir]-A[i].jumlah;
			else if (dp[A[i].awal-1]!=-1 && dp[A[i].akhir]==-1) dp[A[i].akhir] = dp[A[i].awal-1]+A[i].jumlah;
			else if (dp[A[i].awal-1]==-1 && dp[A[i].akhir]==-1) {
				
			}
		}
	}
	while (r--) {
		cin >> x >> y;
		if (x==0) cout << dp[y] << endl;
		else cout<<dp[y]-dp[x-1]<<endl;
	}
}
