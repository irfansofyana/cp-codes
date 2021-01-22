#include <bits/stdc++.h>
using namespace std;
string data[]={"AB","BBA","CAC","DBA","DB"};
int n,i,j,m,k,idx,temp;
string jawaban;
string input,tanya,smt;
char akhir[1000];
string hasil[1000];

int main(){
	cin>>n;
	for (i=1;i<=n;i++){
		jawaban="";
		cin>>input;
		for (j=0;j<input.length();j++){
			jawaban=jawaban+data[int(input[j])-49];
		}
		cin>>m;
		for (j=1;j<=m;j++){
			cin>>idx>>tanya;
			if (tanya=="kanan"){
				for (k=0;k<jawaban.length();k++){
					temp=(k+idx)%jawaban.length();
					akhir[temp]=jawaban[k];	
				}
				jawaban=akhir;
			}
			else if (tanya=="kiri"){
				smt="";
				for (k=jawaban.length()-1;k>=0;k--) smt=smt+jawaban[k];
				for (k=0;k<smt.length();k++){
					temp=(k+idx)%smt.length();
					akhir[temp]=smt[k];	
				}
				jawaban=akhir;
				smt="";
				for (k=jawaban.length()-1;k>=0;k--) smt=smt+jawaban[k];
				jawaban=smt;
			}
		}
		cout<<jawaban<<endl;
	}
	return 0;
}
