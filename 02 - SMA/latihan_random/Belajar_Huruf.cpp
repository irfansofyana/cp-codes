#include <bits/stdc++.h>
using namespace std;
int x,y,t,i,j;
string dilarang,tulisan,jawaban;
int A[200];

int main(){
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>x>>y;
		memset(A,0,sizeof(A));
		cin>>dilarang;
		cin.ignore();
		getline(cin,tulisan);
		for (j=0;j<dilarang.length();j++){
			A[int(dilarang[j])]=1;
		}
		jawaban="";
		for (j=0;j<tulisan.length();j++){
			if (A[int(tulisan[j])]!=1) jawaban+=tulisan[j];
		}
		cout<<jawaban<<endl;
	}	
}
