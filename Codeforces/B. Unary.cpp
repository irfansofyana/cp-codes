#include <bits/stdc++.h>
using namespace std;

int n,i,j,nilai;
int A[1000];
string s[]={"1000","1001","1010","1011","1100","1101","1110","1111"};
string jawab,input;
const int m=1000003;
void isipangkat(){
	A[0]=1;
	for (int z=1;z<=500;z++){
		A[z]=(2*A[z-1])%m;
	}
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>input; jawab="";
	isipangkat();
	for (i=0;i<input.length();i++){
		if (input[i]=='>') jawab=jawab+s[0];
		else if (input[i]=='<') jawab=jawab+s[1];
		else if (input[i]=='+') jawab=jawab+s[2];
		else if (input[i]=='-') jawab=jawab+s[3];
		else if (input[i]=='.') jawab=jawab+s[4];
		else if (input[i]==',') jawab=jawab+s[5];
		else if (input[i]=='[') jawab=jawab+s[6];
		else if (input[i]==']') jawab=jawab+s[7];
	}
	for (i=jawab.length()-1;i>=0;i--){
		nilai+=((int(jawab[i])-48)*A[jawab.length()-1-i])%m;
	}
	cout<<nilai%m<<endl;
	return 0;
}
