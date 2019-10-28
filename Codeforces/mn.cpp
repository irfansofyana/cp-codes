#include <bits/stdc++.h>
using namespace std;

int n,k,i,j;
int A[10000],B[10000];
int temp,banyak;
string jawaban;
bool cek;
string konvert(int p){
	stringstream ss;
	ss<<p;
	return ss.str();
}
int main(){
	cin>>n>>k;
	for (i=1;i<=n*k;i++) B[i]=1;
	for (i=1;i<=k;i++){
		cin>>A[i];
		B[A[i]]=0;
	}
	for (i=1;i<=k;i++){
		jawaban="";
		jawaban=jawaban+konvert(A[i])+" ";
		j=n*k;
		banyak=1;
		cek=false;
		B[A[i]]=0;
		while (j>=1 && !cek ){
			if (B[j]==1){
				jawaban=jawaban+konvert(j)+" ";
				banyak++;
				B[j]=0;
			}
			if (banyak==n) cek=true;
			j=j-1;
		}
		jawaban.erase(jawaban.length()-1,1);
		cout<<jawaban<<endl;		
	}	
}
