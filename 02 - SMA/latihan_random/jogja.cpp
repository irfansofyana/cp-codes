#include <bits/stdc++.h>
using namespace std;
string s,ans,temp;
int awal,n,i,j,spasi;
bool pertama;
int main(){
	getline(cin,s);
	ans="";
	spasi=s.find(" ",0);
	awal=0; pertama=true;
	while (spasi>=0 && spasi<s.length()){
		if (s.substr(awal,spasi-1-awal+1).length()==5 && pertama){
			if (s.substr(awal,spasi-1-awal+1)=="jogya" || s.substr(awal,spasi-1-awal+1)=="yogya" ||s.substr(awal,spasi-1-awal+1)=="yogja" ) ans=ans+"jogja";
		else if (s.substr(awal,spasi-1-awal+1).length()==5){
			if (s.substr(awal,spasi-1-awal+1)=="jogya" || s.substr(awal,spasi-1-awal+1)=="yogya" ||s.substr(awal,spasi-1-awal+1)=="yogja" ) ans=ans+" jogja";
			else ans=ans+s.substr(awal,spasi-1-awal+1);
		}
		else if (s.substr(awal,spasi-1-awal+1).length()==10 && pertama){
			temp=s.substr(awal,spasi-1-awal+1).length();
			if (temp.find("karta")>=0 && temp.find("karta")<temp.length()){
				if (temp.substr(0,5)!="yogya") {
					ans=ans+"yogyakarta";
				}
				else ans=ans+"yogyakarta";
			}
			else ans=ans+temp;
			pertama=false;
		}
		else if (s.substr(awal,spasi-1-awal+1).length()==10){
			temp=s.substr(awal,spasi-1-awal+1).length();
			if (temp.find("karta")>=0 && temp.find("karta")<temp.length()){
				if (temp.substr(0,5)!="yogya") {
					ans=ans+" yogyakarta";
				}
				else ans=ans+" yogyakarta";
			}
			else ans=ans+' '+temp;
		}
		else if (pertama) {
			ans=ans+s.substr(awal,spasi-1-awal+1);
			pertama=false;
		}
		else if (!pertama){
			ans=ans+' '+s.substr(awal,spasi-1-awal+1);
		}
		cout<<ans<<endl;
		awal=spasi+1;
		spasi=s.find(" ",spasi+1);
	}
	if (s.substr(awal,s.length()-1-awal+1).length()==5){
		if (s.substr(awal,spasi-1-awal+1)=="jogya" || s.substr(awal,spasi-1-awal+1)=="yogya" ||s.substr(awal,spasi-1-awal+1)=="yogja" ) ans=ans+" jogja";
		else ans=ans+s.substr(awal,spasi-1-awal+1);
	}
	else if (s.substr(awal,s.length()-1-awal+1).length()==10){
			temp=s.substr(awal,s.length()-1-awal+1).length();
			if (temp.find("karta")>=0 && temp.find("karta")<temp.length()){
				if (temp.substr(0,5)!="yogya") {
					ans=ans+" yogyakarta";
				}
				else ans=ans+" yogyakarta";
			}
			else ans=ans+' '+temp;
	}
	else ans=ans+' '+s.substr(awal,s.length()-1-awal+1);
	cout<<ans<<endl;
}
}
