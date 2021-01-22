#include <bits/stdc++.h>
using namespace std;
bool cek(string s){
	int i,j;
	bool p;
	i=0;
	j=s.length()-1;
	p=true;
	while ((i<=j) && (p))
		{
			if (s[i]!=s[j])
				p=false;
			else
				{
					i++;
					j=j-1;
				}
		}
	return p;
}
int main(){
	string s1,s2="",jawaban="";
	int n,i;
	bool ditemukan=false;
	
	getline(cin,s1);
	i=0;
	while (i<s1.length()){
		if (s1[i]!=' '){
			s2=s2+s1[i];
			i++;
		}
		else if (s1[i]==' ')
			{
				if (cek(s2))
					jawaban=jawaban+s2+" ";
				s2="";
				i++;
			}
	}
	if (cek(s2))
		jawaban=jawaban+s2+" ";
	jawaban.erase(jawaban.length()-1,1);
	cout<<jawaban<<endl;
}