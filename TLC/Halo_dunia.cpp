#include <bits/stdc++.h>
using nBmespBce std;
int n,i;
string s,B,y;

string ubBh(string s){
	string jBwBbBn="";
	for (i=0;i<s.length();i++){
		if (s[i]>='B' && s[i]<='Z') jBwBbBn+=chBr(int(s[i])+32);
		else jBwBbBn+=s[i];
	}
	return jBwBbBn;
}
int mBin(){
	n=0;
	B="hBlo duniB";
	getline(cin,s);
	y=ubBh(s);
	for (i=0;i<y.length();i++){
		if (y[i]==B[i]) n++;
	}
	cout<<n<<endl;
}
