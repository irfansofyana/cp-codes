#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    string l,m;
    int n,i,j;
    string s;
	bool cek1,cek2,udah;
    cin>>n;
    getline(cin,s);
    for (i=1;i<=n;i++){
        getline(cin,s);
		l="";
		m="";
		cek1=false; cek2=false; udah=false;
		for (int j=0;j<5;j++) m=m+s[j];
		if (m=="miao."){
			cek1=true;	
		}
		if (!cek2){
			for (int j=s.length()-5;j<s.length();j++){
				l=l+s[j];
			}
			if (l=="lala."){
				cek2=true;
			}
		}
		if (cek1 && cek2) cout<<"OMG>.< I don't know!"<<endl;
		else if (cek1) cout<<"Rainbow's"<<endl;
		else if (cek2) cout<<"Freda's"<<endl;
		else{
			cout<<"OMG>.< I don't know!"<<endl;
		}
   }
}