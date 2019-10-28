#include <bits/stdc++.h>
using namespace std;

	string s,jawaban="";
	int n,i,j,k;
	int kata=0;
	int l;
	bool ada;
bool cek(int l){
	if ((s[l]>='a' && s[l]<='z') || (s[l]>='A' && s[l]<='Z') || (s[l]>='1' && s[l]<='9'))
		return true;
	else
		return false;
}
int main(){
	int temp;
	getline(cin,s);
	k=0;
	j=s.find('.',k);
	while (j>=0 && j<s.length()){
		kata=0;
		l=k;
		while (l<=j){
			if (!cek(l) && !cek(l+1))
				l=l+2;
			else if (!cek(l) && cek(l+1)){
				kata++;
				l++; 
			}
			else 
				l++;
		}
		if (kata==0 && k==0)
			kata=1;
		for (l=k;l<=j;l++){
			temp=(int(s[l])+kata)%26;
			if ((int(s[l])>=65 && int(s[l])<=90) || (int(s[l])>=97 && int(s[l])<=122) )
					s[l]=char(temp+26);
			jawaban+=s[l];
		}
		k=j+1;
		j=s.find('.',k);
	}
	for (i=k;i<s.length();i++)
		jawaban+=s[i];
	cout<<jawaban<<endl;
}
