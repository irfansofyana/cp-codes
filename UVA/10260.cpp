#include <bits/stdc++.h>
using namespace std;

int i,j;
string s,ans,jawab;
char A[26]={'0','1','2','3','0','1','2','0','0','2','2','4','5','5','0','1','2','6','2','3','0','1','0','2','0','2'};
char sebelum;
bool pertama;
int main(){
	while (cin>>s){
		ans="";
		jawab="";
		i=0;
		pertama=true;
		while (i<s.length()){
			ans=ans+A[int(s[i])-65];
			i++;
		}
		i=0;
		while (i<ans.length()){
			j=i;
			while (ans[j]==ans[j+1] && j<ans.length()-1){
				if (ans[j]=='0') jawab=jawab+ans[j];
				j++;
			}
			jawab=jawab+ans[j];
			i=j+1; 
		}
		ans="";
		for (i=0;i<jawab.length();i++){
			if (jawab[i]!='0') ans=ans+jawab[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
