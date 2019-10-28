#include <bits/stdc++.h>
using namespace std;

int n,m;
string temp1[3010],temp2[3010];
string s[3010];
string jawaban="";

int main(){
	cin>>n>>m;
	for (int i=1;i<=m;i++){
		cin>>temp1[i];
		cin>>temp2[i];
	}
	for (int i=1;i<=n;i++) cin>>s[i];
	jawaban="";
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (temp1[j]==s[i]){
				if (temp2[j].length()>=temp1[j].length()) jawaban+=temp1[j]+" ";
				else jawaban+=temp2[j]+" ";
			}
			else if (temp2[j]==s[i]){
				if (temp2[j].length()>=temp1[j].length()) jawaban+=temp1[j]+" ";
				else jawaban+=temp2[j]+" ";
			}
		}
	}
	jawaban.erase(jawaban.length()-1,1);
	cout<<jawaban<<endl;
}
