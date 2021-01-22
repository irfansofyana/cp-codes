#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	string temp;
	string jawaban;
	bool cek=false;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>temp;
		jawaban="";
		j=temp.length()-1;
		cek=false;
		if (temp=="0") jawaban=jawaban+'0';
		else{
		while (j>=0){
			if (temp[j]=='0' && !cek) j=j-1;
			else if (temp[j]!='0'){
				jawaban=jawaban+temp[j];
				cek=true;
				j=j-1;
			}
			else if (temp[j]=='0' && cek){
				jawaban=jawaban+temp[j];
				j=j-1;
			} 
		}
		}
		cout<<jawaban<<endl;
	}	
}
