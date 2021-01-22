#include <bits/stdc++.h>
using namespace std;
string s;
int B[10];
void isi(){
	B[0]=2;
	B[1]=6;
	B[2]=2;
	B[3]=3;
	B[4]=3;
	B[5]=4;
	B[6]=2;
	B[7]=5;
	B[8]=1;
	B[9]=2;
}
int main(){
	int jawaban;
	isi();
	cin>>s;
	jawaban=B[int(s[0])-'0']*B[int(s[1])-'0'];
	cout<<jawaban<<endl;	
}
