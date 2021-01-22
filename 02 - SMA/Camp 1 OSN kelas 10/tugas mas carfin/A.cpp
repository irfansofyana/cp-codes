#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n,i,j,m,x;
	int jumlah=0;
	int jawaban;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>m;
		jumlah=0;
		for (j=1;j<=m;j++){
			cin>>x;
			jumlah+=x;
		}
		if (jumlah<=16000)
			jawaban=16;
		else if (jumlah>16000 && jumlah<=32000)
			jawaban=32;
		else if (jumlah>32000 && jumlah<=64000)
			jawaban=64;
		else if (jumlah>64000 && jumlah<=128000)
			jawaban=128;
		printf("Case #%d: %dGB\n",i,jawaban);		
	}
}
