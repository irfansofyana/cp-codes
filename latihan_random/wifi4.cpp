#include <bits/stdc++.h>
using namespace std;

int n;
char c;
string temp,jawaban="";
int main(){
	cin>>n;
	for (int i=0;i<n;i++){
		if (i==0) cin.ignore();
		getline(cin,temp);
		jawaban="";
		for (int j=0;j<temp.length();j++){
			if (j%2==0 && temp[j]!=' '){
				if (temp[j]=='y') jawaban=jawaban+'a';
				else if (temp[j]=='Y') jawaban=jawaban+'A';
				else if (temp[j]=='Z') jawaban=jawaban+'B';
				else if (temp[j]=='z') jawaban=jawaban+'b';
				else jawaban=jawaban+char(int(temp[j])+2);
			}
			else jawaban=jawaban+temp[j];
		}
		cout<<jawaban<<endl;
	}
}
