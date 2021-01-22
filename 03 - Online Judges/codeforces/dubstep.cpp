#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	string s,jawaban="";
	int n,i,k=0,terakhir,sebelum;
	
	getline(cin,s);
	i=0;
	while (i<s.length()){
		if (s[i]!='W'){
			sebelum=i;
			jawaban=jawaban+s[i];
			i++;
			k++;
		}
		else if (s[i]=='W'){
			if (s[i+1]=='U'){
				if (s[i+2]=='B'){
					terakhir=i;
					if (k>0){
						jawaban=jawaban+" ";
						i=i+3;
					}
					else if (k==0){
						i=i+3;
					}
				}
				else{
					sebelum=i;
					i++;
					jawaban=jawaban+'U';
					}
			}	
			else{
				sebelum=i;
				jawaban=jawaban+'W';
				i++;
			}
		}
	}
	
	cout<<jawaban<<endl;
}
