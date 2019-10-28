#include <iostream>
using namespace std;
int loket[1005];
int m;
long long cek(long long a){
	if (a==0) return 0;
	long long ct=0;
	for(int i=1;i<=m;i++){
		ct=ct+(((a-1)/(loket[i]))+1);
		if (ct>=1e9) break;
	}
	return ct;
}
int main(){
	int n;cin >> n >> m;
	for(int i=1;i<=m;i++) cin >> loket[i];
	int q; cin >> q;
	for(int i=1;i<=q;i++){
	int tmp; cin >> tmp;
	long long banyak_pelanggan;
	long long kiri=1; long long kanan=1e18; long long mid;
	long long hasil=0;
	while(kiri<=kanan){
			mid=(kiri+kanan)/2;
			banyak_pelanggan=cek(mid);
			if(banyak_pelanggan<tmp) {kiri=mid+1; hasil=mid;}
			else kanan=mid-1;
		}
	//	cout << banyak_pelanggan <<"  "<<mid << endl;
			banyak_pelanggan=cek(hasil);
			for(int j=1;j<=m;j++)
			{
				if(hasil%loket[j]==0) banyak_pelanggan++;
				if(banyak_pelanggan==tmp){
				cout << j << endl;
				break;
				}
			}
	}
	
}