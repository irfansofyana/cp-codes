#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,k,i,j;
int kondisi[105];
string s;

int main(){
	OPTIMASI
	cin >> n >> k;
	memset(kondisi,0,sizeof kondisi);
	kondisi[1] = -1; kondisi[k] = 1;
	for (i = 0; i < n ; i++) {
		cin >> j >> s;
		if (s=="SAFE") for (int z = 1; z<=j;z++) kondisi[z] = -1;
		else for (int z = j ; z<=k; z++) kondisi[z] = 1;
	}
	int ans1,ans2;
	//for (i = 1 ; i<=k ;i++) {
		//cout << kondisi[i] << " ";
	//}
	//cout << '\n';
	for (i = 1 ; i <= k ; i++) {
		if (kondisi[i]==0 || kondisi[i]==1) {
			for (j = i+1 ; j<=k; j++) {
				if (kondisi[j]==-1) break;
			}
			if (j==k+1) {
				ans1 = i;
				break;
			} 
		}
	}
	for (i = k ; i >=1 ; i--) {
		if (kondisi[i]==0 || kondisi[i]==-1) {
			for (j = i-1 ; j>= 1 ; j--) {
				if (kondisi[j]==1) break;
			}
			if (j==0) {
				ans2 = i;
				break;
			} 
		}
	}
	cout << ans1 << " " << ans2 << '\n';
	return 0;
}