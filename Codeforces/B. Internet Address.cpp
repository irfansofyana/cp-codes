#include <bits/stdc++.h>
using namespace std;
int i,j,k,ru;
string s,jawaban;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>s; jawaban="";
	if (s.substr(0,3)=="ftp"){
		jawaban=jawaban+"ftp://";
		ru=s.find("ru",0);
		//cout<<s.substr(3,ru-3)<<endl;
		if (ru==3) ru=s.find("ru",ru+1);
		jawaban=jawaban+s.substr(3,ru-3)+".ru/"+s.substr(ru+2,s.length()-1-(ru+2)+1);
		if (jawaban[jawaban.length()-1]=='/') jawaban.erase(jawaban.length()-1,1);
		cout<<jawaban<<endl;
	}
	else if (s.substr(0,4)=="http"){
		jawaban=jawaban+"http://";
		ru=s.find("ru",0);
		if (ru==4) ru=s.find("ru",ru+1);
		jawaban=jawaban+s.substr(4,ru-1-4+1)+".ru/"+s.substr(ru+2,s.length()-1-(ru+2)+1);
		if (jawaban[jawaban.length()-1]=='/') jawaban.erase(jawaban.length()-1,1);
		cout<<jawaban<<endl;
	}
	return 0;
}
