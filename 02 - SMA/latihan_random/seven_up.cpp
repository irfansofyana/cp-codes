#include <bits/stdc++.h>
using namespace std;
int n,i,j,m;
char f;
string temp;

bool ngecek(string s,char c){
	bool tf=false;
	int i;
	for (i=0;i<s.length();i++){
		if (s[i]==c){
			tf=true;
			break;
		}
	}
	return tf;
}

string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}

int main(){
	string s,jawaban="";
	cin>>n;
	cin>>m;
	f=static_cast<char>(m+48);
	for (i=1;i<=n;i++){
		s=ubah(i);
		if (ngecek(s,f) || (i%m==0)) jawaban=jawaban+"boom ";
		else jawaban=jawaban+s+" ";
	}
	jawaban.erase(jawaban.length()-1,1);
	cout<<jawaban<<endl; 
}
