#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	string sebelum="",s,p,sesudah="",jawaban;
	bool sudah=false;
	
	cin>>s;
	cin>>p;
	for (i=0;i<s.length();i++)
		{
			if ((s[i]!='|') && (!sudah))
				sebelum=sebelum+s[i];
			else if (sudah)
				sesudah=sesudah+s[i];
			else if (s[i]=='|'){
				sudah=true;
			}
		}
	n=s.length()-1+p.length();
	if (((s.length()-1+p.length())%2==1) || (sebelum.length()>(n/2)) || (sesudah.length()>(n/2)))
		cout<<"Impossible"<<endl;
	else
		{
			n=s.length()-1+p.length();
			i=0;
			while (sebelum.length()!=(n/2))
				{
					sebelum=sebelum+p[i];
					i++;
				}
			while (sesudah.length()<(n/2))
				{
					sesudah=sesudah+p[i];
					i++;
				}
			jawaban=sebelum+'|'+sesudah;
			cout<<jawaban<<endl;
		}
}