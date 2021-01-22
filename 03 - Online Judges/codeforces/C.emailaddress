#include <bits/stdc++.h>
using namespace std;
int n,i,j,dot,at;
string s;
string jawaban;

int main(){
	cin>>s;
	jawaban="";
	dot=s.find("dot",0);
	while (dot>=0 && dot<s.length()){
		if (dot==0 || dot==s.length()-3){
			if (dot==s.length()-3) break;
			else{
				dot=s.find("dot",dot+1);
			}
		}
		else{
			s.erase(dot,3);
			s.insert(dot,".");
			dot=s.find("dot",dot+1);
		}
	}
	at=s.find("at",0);
	while (at>=0 && at<s.length()){
		if (at==0 || at==s.length()-2){
			at=s.find("at",at+1);
		}
		else{
			s.erase(at,2);
			s.insert(at,"@");
			at=s.find("at",at+1);
			break;
		}
	}
	cout<<s<<endl;
	return 0;
}