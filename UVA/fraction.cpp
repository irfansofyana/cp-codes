#include <bits/stdc++.h>
using namespace std;
int k;
int solusix[10000],solusiy[10000];
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while (cin>>k){
		int banyak=0,idx=1;
		for (int i=1;i<=k;i++){
			if (k*k%i==0) {
				int z=((k*k)/i);
				banyak++;
				solusix[idx]=i+k;
				solusiy[idx]=z+k;
				idx++;
			}
		}
		cout<<banyak<<endl;
		for (int i=1;i<=banyak;i++){
			cout<<1<<'/'<<k<<" = "<<1<<'/'<<solusiy[i]<<" + "<<1<<'/'<<solusix[i]<<endl;
		}
	}
	return 0;
}
