#include <bits/stdc++.h>
using namespace std;
int A[200];
int i,j;
string s;

bool cekgenap(){
	bool cek=true;
	for (int z=97;z<=122;z++){
		if (A[z]%2==1) {
			cek=false;
			break;
		}
	}
	return cek;
}

int main(){
	cin>>s;
	for (i=0;i<s.length();i++) A[int(s[i])]++;
	if (s.length()%2==1) cout<<"First"<<endl;
	else{
		if (s.length()%2==0 && cekgenap()) cout<<"First"<<endl;
		else cout<<"Second"<<endl;
	}
	return 0;
}
