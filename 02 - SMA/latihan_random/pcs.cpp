#include <bits/stdc++.h>
using namespace std;
int n,i,j,k;
string s,ans,jawab,temp;
string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>s;
	while (s.length()!=1){
		jawab="";
		for (i=0;i<=s.length()-2;i++){
			k=(int(s[i])-48)*(int(s[i+1])-48);
			temp=ubah(k);
			while (temp.length()!=1){
				int l;
				l=(int(temp[0])-48)*(int(temp[1])-48);
				temp=ubah(l);
			}
			jawab=jawab+temp;
		}
		s=jawab;	
	}
	cout<<s<<endl;
}
