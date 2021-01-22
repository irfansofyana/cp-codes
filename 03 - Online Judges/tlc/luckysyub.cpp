#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	int k,maks;
	string s;
	int empat=0,tujuh=0,et=0;
	cin>>s;
	for (i=0;i<s.length();i++){
		if (s[i]=='4')
			empat++;
		else if (s[i]=='7')
			tujuh++;
	}
	j=0;
	while (j<s.length()){
		k=s.find("47",j);
		if (k>=0 && k<s.length()){
			et++;
			j=k+2;
		}
		else
			j=s.length()+1;
	}
	if (empat==0 && tujuh==0 && et==0)
		cout<<-1<<endl;
	else{
		if (empat==tujuh) maks=empat;
		else if (empat<tujuh)
			maks=tujuh;
		else if (empat>tujuh)
			maks=empat;
		if (et>=maks){
			if (et==maks){
				if (maks==empat)
					cout<<4<<endl;
				else
					cout<<7<<endl;
			}
			else
				cout<<47<<endl;
		}
		else if (et<maks){
			if (maks==empat) cout<<4<<endl;
			else if (maks==tujuh) cout<<7<<endl;
		}
		}
	}
