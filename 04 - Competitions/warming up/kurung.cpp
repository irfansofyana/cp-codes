#include <bits/stdc++.h>
using namespace std;
string s;
int i,depan;
bool udah,jawab;
int main(){
	cin.tie(0);
	cin>>s;
	i=0; udah=false; jawab=true; depan=0;
	while (i<s.length()){
		if (depan<0){
			jawab=false;
			break;
		}
		if (s[i]==')' && !udah){
			jawab=false;
			break;
		}
		else if (s[i]=='('){
			udah=true;
			depan++;
		}
		else if (s[i]==')' && udah){
			depan--;
		}
		i++;
	}
	if (depan==0 && jawab) cout<<"true"<<endl;
	else cout<<"false"<<endl;
}
