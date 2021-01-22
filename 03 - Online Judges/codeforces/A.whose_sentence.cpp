#include <bits/stdc++.h>
using namespace std;

string s,l,m;
int n,i;
bool udah;
char c;

int main(){
	cin.tie(0);
	cin>>n;
	cin>>c;
	for (i=1;i<=n;i++){
		getline(cin,s);
		l="";
		m="";
		udah=false;
		for (int j=0;j<5;j++) m=m+s[j];
		if (m=="miao."){
			cout<<"Rainbow's"<<endl;
			udah=true;
		}
		if (!udah){
			for (int j=s.length()-5;i<s.length();i++){
				l=l+s[j];
			}
			if (l=="lala."){
				cout<<"Freda's"<<endl;
				udah=true;
			}
		}
		if (!udah) cout<<"OMG>.< I don't know!"<<endl;
	}
	return 0;
}