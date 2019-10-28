#include <bits/stdc++.h>
using namespace std;

int x,i,bila,bilb;
int temp,ans;
int da[10],dp[10];

void cari_satu(int k){
	memset(da,0,sizeof da);
	while (k>0) {
		da[k%10]++;
		k/=10;
	}
}

void cari_dua(int k){
	memset(dp,0,sizeof dp);
	while (k>0) {
		dp[k%10]++;
		k/=10;
	}
}

bool cek(){
	for (int z=0;z<=9;z++) {
		if (da[z]>=1 && dp[z]>=1) return true;
	}
	return false;
} 

int main(){
	cin.tie(0);
	cin >> x;
	cari_satu(x);
	for (i=1;i<=(int)sqrt(x);i++) {
		if (x%i==0) {
			bila = i; bilb = (x/i);
			cari_dua(bila);
			if (cek()) ans++;
			if (bila!=bilb) {
				cari_dua(bilb);
				if (cek()) ans++;
			}
		}
	}
	cout << ans << endl;
}
