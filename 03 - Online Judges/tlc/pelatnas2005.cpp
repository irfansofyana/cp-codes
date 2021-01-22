#include <bits/stdc++.h>
using namespace std;

int n,spasi,awal,j;
string s,jawaban,temp,smt;
char c;
bool cekkonsonan(char c){
	if (!(c=='A' || c=='I' || c=='U' || c=='E' || c=='O')) return true;
	else return false;
}
int main(){
	cin.tie(0);
	cin>>n; cin.ignore();
	for (int i=1;i<=n;i++){
		getline(cin,s);
		awal=0; jawaban="";
		spasi=s.find(" ",awal);
		while (spasi>=0 && spasi<s.length()){
			temp=s.substr(awal,spasi-awal); cout<<temp<<endl;
			if (temp.length()==2) jawaban=jawaban+temp+" ";
			else{
				j=0; smt="";
				while (j<temp.length()){
					if (cekkonsonan(temp[j]) && cekkonsonan(temp[j+1])){
						smt=temp[j+1]
						j=j+2;
					}
					else {
						smt=temp[j]+smt;
						j++;
					}
				}
				cout<<smt<<endl;
			}
			awal=spasi+1;
			spasi=s.find(" ",awal+1);
		}
		cout<<jawaban<<endl;
	}
	return 0;
}
