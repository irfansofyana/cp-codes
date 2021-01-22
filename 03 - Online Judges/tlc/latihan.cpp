#include <bits/stdc++.h>
using namespace std;

int tukar(string s){
	int nilai;
	ostringstream convert;
	convert<<s;
	nilai=convert.s();
}
int main(){
	string s,temp1,temp2;
	int jumlah=0;
	int n,i,j;
	bool pertama=true;
	
	cin>>s;
	i=1;
	while (i<s.length()){
		if (s[i]=='+' && pertama){
			for (j=0;j<)
		}
		else if (s[i]=='-' && pertama){
			jumlah+=int(s[i-1])-'0'-int(s[i+1])+'0';
			pertama=false;
		}
		else if (s[i]=='+' && !pertama){
			jumlah+=int(s[i+1])-'0';
		}
		else if (s[i]=='-' && !pertama){
			jumlah=jumlah-int(s[i+1])+'0';
		}
		i+=2;
	}
	cout<<jumlah<<endl;
}
