#include <bits/stdc++.h>
using namespace std;
struct paket{
	int banyak;
	int penalti;
};
int n,k,i,j,temp,asal;
paket A[100];
int ans[100],x;
bool comp(paket a,paket b){
	if (a.banyak>b.banyak) return true;
	else if (a.banyak==b.banyak && a.penalti<b.penalti) return true;
	else return false;
}
int main(){
	scanf("%d %d",&n,&k);
	for (i=0;i<n;i++){
		int temp1,temp2;
		scanf("%d %d",&temp1,&temp2);
		A[i].banyak=temp1;
		A[i].penalti=temp2;
	}
	sort(A,A+n,comp);
	x=1; i=0; asal=0;
	while (i<n-1){
		if (A[i].banyak==A[i+1].banyak && A[i].penalti==A[i+1].penalti) x++;
		else {
			for (j=asal;j<=i;j++) ans[j]=x;
			x=1;
			asal=i+1;
		}
		i++;
	}
	if (x==1) ans[i]=x;
	else {
		for (j=asal;j<=i;j++) ans[j]=x;
	}
	printf("%d\n",ans[k-1]);
	return 0;
}
