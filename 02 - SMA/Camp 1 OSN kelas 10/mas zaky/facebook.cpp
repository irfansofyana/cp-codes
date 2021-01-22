#include <bits/stdc++.h>
using namespace std;
bool cek(char c){
	if ((int(c)>=97 && int(c)<=122)||(int(c)>=65 && int(c)<=90))
		return true;
	else
		return false;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,i,k,banyak=0;
	string s,j,A[1000];
	bool penanda=false;;
	
	cin>>n;
	for (k=0;k<=n;k++){
		getline(cin,s);
		i=0;
		j='#';
		penanda=false;
		while (i<s.length()){
			if (s[i]=='#' && penanda==false){
				if (cek(s[i+1])==false)
					i=i+1;
				else if (ceks[i+1]){
					banyak++;
					j=j+s[i+1];
					penanda=true;
					i++;	
				}
			}
			else if (penanda==true && cek(s[i])){
				j=j+s[i];
				i++;
			}
			else if (penanda==true && cek(s[i])==false){
				A[banyak]=j;
				j="";
				if (cek(s[i+1])){
					penanda=false;
					i=i+2;
				}
				else{
					
				}
			}
		}
	}
	
}
