#include <bits/stdc++.h>
using namespace std;
int i,j,tot;
int banyak(string s){
	int i,banyak=0;
	for (i=0;i<s.length();i++){
		if (s[i]=='1') banyak++;
	}
	return banyak;
}

string ubah(int p){
	stringstream ss;
	ss<<p;
	return ss.str();
}

int main(){
	for (i=1;i<=10000;i++){
		tot+=banyak(ubah(i));
	}
	cout<<tot<<endl;
}
