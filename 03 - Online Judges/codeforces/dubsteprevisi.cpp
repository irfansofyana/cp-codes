#include <bits/stdc++.h>
using namespace std;
string s,jawaban="",temp;
int i,j,idx,asal,next;

int main(){
	cin>>s;
	asal=0;
	idx=s.find("WUB",asal);
	jawaban="";
	while (idx>=0 && idx<s.length()){
		next=s.find("WUB",idx+3);
		if (asal==0){
			temp=jawaban;
			for (i=0;i<idx;i++) jawaban+=s[i];
			if (temp.length()!=jawaban.length()) jawaban+=" ";
			asal++;
		}
		if (!(next>=0 && next<s.length()) && (idx>=0 && idx<s.length())){
			temp=jawaban;
			for (i=idx+3;i<s.length();i++) jawaban+=s[i];
			if (temp.length()!=jawaban.length()) jawaban+=" ";
		}
		else {
			temp=jawaban;
			for (i=idx+3;i<=next-1;i++) jawaban+=s[i];	
			if (temp.length()!=jawaban.length()) jawaban+=" ";
		}
		idx=next;
	}
	if (s.find("WUB",0)==-1 && s.length()>0) for (i=0;i<s.length();i++) jawaban+=s[i];
	cout<<jawaban<<endl;
}

