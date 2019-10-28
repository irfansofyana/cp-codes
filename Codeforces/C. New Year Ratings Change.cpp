#include <bits/stdc++.h>
#define rajuh using 
#define goblog namespace
#define pisan std
rajuh goblog pisan;

struct paket{
	long long nilai,pos;
};
long long n,i,j,temp,jawaban[3000010],awal,mark,awalan;
paket A[300010];
bool cek;
bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else return false; 
}
int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>temp;
		A[i].pos=i+1;
		A[i].nilai=temp;
	}
	sort(A,A+n,comp);
	i=0;
	/*for (i=0;i<n;i++) cout<<A[i].nilai<<" ";
	cout<<endl; */ 
	while (i<n){
		awal=i;
		if (i==0){
			mark=A[i].nilai;
		}
		else if (i!=0){
			if (A[i].nilai>=mark) mark=A[i].nilai;
		}
		while (A[i].nilai==A[i+1].nilai) i++;
		for (j=awal;j<=i;j++){
			jawaban[A[j].pos]=mark;
			mark++;
		}
		i++;
	}
	for (i=1;i<=n;i++) cout<<jawaban[i]<<" ";
	cout<<endl;
	return 0;
}
