#include <bits/stdc++.h>
using namespace std;
struct paket{
	int panen,pos;
	int banyak;
};
int B[5000];
int hari,n,v,i,j,t,temp,temp1,ans,banyak;
paket A[5000];
bool comp(paket a,paket b){
	bool cek=false;
	if (a.panen<b.panen) cek=true;
	else if (a.panen==b.panen){
		if (a.banyak<b.banyak) cek==true;
	}
	return cek;
}
bool cek(){
	int j; bool benar=true;
	for (j=1;j<=n;j++){
		if (B[j]==0){
			benar=false;
		}
	}
	return benar;
}
int main(){
	cin.tie(0);
	cin>>n>>v;
	for (i=0;i<n;i++){
		cin>>temp>>temp1;
		A[i].panen=temp;
		A[i].banyak=temp1;
		A[i].pos=i+1;
	}
	sort(A,A+n,comp);
	hari=A[0].panen; i=0; ans=0; banyak=n;
	while (banyak>0){
		if (i==0){
			if (A[i].banyak<=v){
				ans+=A[i].banyak;
				A[i].banyak=0;
				banyak--;
				i++;
			}
			else {
				ans+=v;
				A[i].banyak-=v;
				i++;
			}
		}
		else{
			if (A[i].banyak==v && A[i-1].banyak!=0){
				ans+=v-A[i-1].banyak;
				A[i].banyak=A[i].banyak-(v-(A[i-1].banyak));
				i--;
			}
			else if (A[i].banyak<v && A[i-1].banyak!=0){
				if (v-A[i-1].banyak>=A[i].banyak){
					ans+=A[i].banyak; banyak--;
					i--;
				}
				else if (v-A[i-1].banyak<A[i].banyak){
					ans+=v-A[i-1].banyak; 
					A[i].banyak=A[i].banyak-(v-A[i-1].banyak);
					i--;
				}	 
			}
		}
	}
	
}
