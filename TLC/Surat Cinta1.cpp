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
	int temp,tambah;
	getline(cin,s);
	k=0;
	j=s.find('.',k);
	while (j>=0 && j<s.length()){
		kata=0;
		l=k;
		ada=false;
		while (l<j){
			if (!cek(l) && !cek(l+1)){
				if (s[l+1]=='.'){
					kata++;
				}
				l+=1;
			}
			else if (!cek(l) && cek(l+1) &&ada==true){
				kata++;
				l++; 
			}
			else if (cek(l) && (s[l+1]=='.')){
				kata++;
				l++;
				ada=true;
			}
			else{
				ada=true;
				l++;
			}
		}
		for (l=k;l<=j;l++){
			if ((int(s[l])>=65 && int(s[l])<=90)){
					temp=(s[l]+kata)%26;
					if (temp<=12) tambah=78;
					else tambah=52;
					s[l]=char(temp+tambah);
			}
			else if ((int(s[l])>=97 && int(s[l])<=122)){
					temp=(s[l]+kata)%26;
					if (temp<=18) tambah=104;
					else tambah=78;
					s[l]=char(temp+tambah);
			}
			jawaban+=s[l];
		}
		k=j+1;
		j=s.find('.',k);
	}
	l=k;
	kata=0;
	while (l<s.length()){
		if (!cek(l) && !cek(l+1))
				l=l+2;
		else if (!cek(l) && cek(l+1)){
				kata++;
				l++; 
		}
		else 
				l++;
	}
	kata++;
	for (l=k;l<s.length();l++){
		
			if ((int(s[l])>=65 && int(s[l])<=90)){
					temp=(s[l]+kata)%26;
					if (temp<=12) tambah=78;
					else tambah=52;
					s[l]=char(temp+tambah);
			}
			else if ((int(s[l])>=97 && int(s[l])<=122)){
					temp=(s[l]+kata)%26;
					if (temp<=18) tambah=104;
					else tambah=78;
					s[l]=char(temp+tambah);
			}
			jawaban+=s[l];
	}
	cout<<jawaban<<endl;
}
