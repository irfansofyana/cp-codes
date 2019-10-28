#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nilai,int pos;
};
int t,n,x,y,i,j,k,m,ans,banding1;
paket banyak[2000];
int orang[2000];
int pasangan[1010][1010];
bool comp(paket a,paket b){
	if (a.nilai>b.nilai) return true;
	else return false;
}
bool cek(){
	int i;
	bool nilai=true;
	for (i=1;i<=n;i++){
		if (orang[i]==0) nilai=false; 
	}
	return nilai;
}
int main(){
	cin.tie(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>x>>y; ans=0;
		memset(pasangan,0,sizeof(pasangan));
		for (j=0;j<n;j++){
			cin>>temp;
			banyak[j].nilai=temp; banyak[j].pos=j+1;
			for (k=0;k<banyak[j].nilai;k++){
				cin>>x;
				pasangan[j+1][x]=1;
			}
		}
		sort(banyak,banyak+n,comp);
		j=0;
		while (!cek()){
			banding1=0;
			for (k=1;k<=n;k++){
				if (pasangan[banyak[j].pos][k]==1) banding1++;
			}
			if (y<=(banding1+1)*x) ans+=y;
			else ans+=((banding1+1)*x);
			for (k=1;k<=n;k++){
				if (pasangan[banyak[j].pos][k]==1){
					orang[k]=1;
					pasangan[banyak[j].pos][k]=0;
				}
			}
			j++;
		}
	}
}
