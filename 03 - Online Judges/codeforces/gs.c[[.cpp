#include <bits.stdc++.h>
using namespace std;

int a,b,c,d;
string s1,s2;

int ubah(string s){
	stringstream ss(s);
	int result;
	return result>>ss ? result:0;
}
int main(){
	cin>>s1;
	cin>>s2;
	a=s1.substr(0,2);
	b=s1.substr(3,2);
	c=s2.substr(0,2);
	d=s2.substr(3,2);
}
