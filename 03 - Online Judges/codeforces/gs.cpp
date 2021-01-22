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
	a=ubah(s1.substr(0,2));
	b=ubah(s1.substr(3,2));
	c=ubah(s2.substr(0,2));
	d=ubah(s2.substr(3,2));
}
