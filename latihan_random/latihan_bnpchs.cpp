#include <bits/stdc++.h>
using namespace std;
bool cek(string s){
	int i,j;
	bool nilai=true;
	i=0;
	j=s.length()-1;
	while (i<=j && nilai){
		if (s[i]!=s[j]) nilai=false;
		else{
			i++;
			j--;
		}
	}
	return nilai;
}
int main(){
	int n,i,j,k,jawaban;
	int banyak,idx,awal;
	string s,temp;
	bool cukup=false;
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>s;
		cukup=false;
		j=s.length();
		banyak=j;
		k=0;
		while (j>=1 && !cukup){
			temp=s.substr(k,j);
			if (cek(temp)){
				cukup=true;
				jawaban=j;
			}
			if (k+banyak>=s.length()){
				j=j-1;
				k=0;
				banyak=j;
			}
			else if (!cek(temp)){
				k++;
			}
		}
		cout<<"Kasus #"<<i<<": "<<jawaban<<endl;
	}
	return 0;
}
