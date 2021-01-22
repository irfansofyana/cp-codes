#include <bits/stdc++.h>
using namespace std;
int t,i,j,a,b;
int A[1000];
bool cekprima(int k){
	if (k<=1) return false;
	if (k==2) return true;
	for (int j=2;j<=int(sqrt(k));j++){
		if (k%j==0) return false;
	}
	return true;
}
bool cek_hampir_prima(int k){
	int banyak=2;
	for (int j=2;j<=int(sqrt(k));j++){
		if (k%j==0){
			int l=k/j;
			if (l!=j) banyak+=2;
			else banyak++;
		}
	}
	if (banyak==4) return true;
	else return false;
}
bool cek_kuadrat_prima(int k){
	int l;
	l=int(sqrt(k));
	if (l*l==k){
		if (cekprima(l)) return true;
		else return false;
	}
	else return false;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>t;
	while (t--){
		int ans=0;
		cin>>a>>b;
		for (i=a;i<=b;i++){
			if (cek_hampir_prima(i) || cek_kuadrat_prima(i)){
				 ans++;
			}
		}
		j=2; int komplemen=0;
		while (j<12) {
			if (j*j*j>=a && j*j*j<=b) {
				if (cekprima(j)){
					komplemen++;
					j++;
				}
				else j++;
			}
			else j++;
		}
		cout<<ans-komplemen<<endl;
	}
	return 0;
}
