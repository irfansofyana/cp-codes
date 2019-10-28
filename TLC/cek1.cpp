#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string base ="QWERTYUIOPLKJHGFDSAZXCVBNM";
	string jawaban="";
	getline(cin,s);
	for (int i=s.length()-1;i>=0;i--){
		if (base.find(s[i])>=0 && base.find(s[i])<base.length()){
			jawaban=jawaban+s[i];
		}
	}
	cout<<jawaban<<endl;
}
