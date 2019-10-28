#include <bits/stdc++.h>
using namespace std;

string s;
int depan,belakang;
int i; bool udah,jawab;

int main(){
	cin>>s;
	i=0;
	udah=false; jawab=true;
	while (i<s.length()){
		if (s[i]=='('){
			udah=true;
			depan++;
		}
		else{
			if (s[i]==')' && udah){
				udah=false; belakang++;
			}
			else if (s[i]==')') jawab=false;
		}
		i++;
	}
	if (depan==belakang && jawab) cout<<"true"<<endl;
	else cout<<"false"<<endl;
}
