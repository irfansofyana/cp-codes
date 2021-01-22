#include <bits/stdc++.h>
using namespace std;
string s;
char vokal[6]={'A','E','I','O','U','Y'};
int i;
int jawab;

bool vokali(char c){
	int i;
	bool cek=false;
	for (i=0;i<6;i++){
		if (vokal[i]==c){
			cek=true;break;
		} 
	}
	return cek;
}
bool vokalcil(char c){
	int i;
	bool cek=false;
	for (i=0;i<6;i++){
		if (vokal[i]==char(int(c)-32)){
			cek=true;
			break;
		}
	}
	return cek;
}
int main(){
	cin.tie(0);
	getline(cin,s);
	i=0; jawab=0;
	while (i>=0 && i<s.length()){
		if (s[i]>='a' && s[i]<='z'){
			if (vokalcil(s[i])) jawab=1;
			else jawab=0;
			i++;
		}
		else if (s[i]>='A' && s[i]<='Z'){
			if (vokali(s[i])) jawab=1;
			else jawab=0; i++;
		}
		else if (i==s.length()-1){
			if (!((s[i]>='a' && s[i]<='z') && (s[i]>='A' && s[i]<='Z'))) i++;
			else if (s[i]>='a' && s[i]<='z'){
			if (vokalcil(s[i])) jawab=1;
			else jawab=0;
			}	
			else if (s[i]>='A' && s[i]<='Z'){
			if (vokali(s[i])) jawab=1;
			else jawab=0;
			}
			i++;
		}
		else i++;
	}
	if (jawab==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
