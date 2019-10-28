#include <bits/stdc++.h>
#define irfan using
#define ganteng namespace
#define banget std

irfan ganteng banget;
int main(){
	string s,jawaban="",temp;
	int n;
	int pos,idx;
	cin>>n;
	cin.ignore();
	getline(cin,s);
	idx=0;
	pos=s.find(" ",0);
	while (pos>=0 && pos<s.length()){
		temp=s.substr(idx,pos+1-idx-1);
		if (temp.length()==n){
			for (int i=0;i<temp.length();i++) jawaban=jawaban+'*';
		}
		else for (int i=0;i<temp.length();i++) jawaban=jawaban+temp[i];
		idx=pos+1;
		pos=s.find(" ",idx);
		jawaban=jawaban+" ";
	}
	if (s.length()-1-idx+1==n) for (int i=idx;i<=s.length()-1;i++) jawaban=jawaban+'*';
	else for (int i=idx;i<=s.length()-1;i++) jawaban=jawaban+s[i];
	cout<<jawaban<<endl;
}
