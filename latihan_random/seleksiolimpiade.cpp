/*author irfan sofyana p*/
#include <bits/stdc++.h>
#define irfan using
#define sofyana namespace
#define putra std
irfan sofyana putra;
struct paket{
	string nama;
	int u1,u2,u3;
};
int n,i,j,m,t,a,b,c;
string temp,orang;
paket A[1000];

void urut(){
	paket smt;
	int acuan,idx;
	for (int i=0;i<n-1;i++){
		acuan=A[i].u3;
		idx=i;
		for (int j=i+1;j<n;j++){
			if (A[j].u3>acuan){
				acuan=A[j].u3;
				idx=j;
			}
			else if (A[j].u3==acuan){
				if (A[j].u2>A[idx].u2){
					idx=j;
				}
				else if (A[j].u2==A[idx].u2){
					if (A[j].u1>A[idx].u1) idx=j;
				}
			}
		}
		smt=A[i];
		A[i]=A[idx];
		A[idx]=smt;
	}
}

int main(){
	cin.tie(0);
	bool cek=false;
	cin>>t;
	for (i=1;i<=t;i++){
		cek=false;
		cin>>n>>m;
		cin>>orang;
		for (j=0;j<n;j++){
			cin>>temp>>a>>b>>c;
			A[j].nama=temp;
			A[j].u1=a;
			A[j].u2=b;
			A[j].u3=c;
		}
		urut();
		for (j=0;j<m;j++){
			if (A[j].nama==orang) cek=true; 
		}
		if (cek) cout<<"YA"<<endl;
		else cout<<"TIDAK"<<endl;
	}
}
