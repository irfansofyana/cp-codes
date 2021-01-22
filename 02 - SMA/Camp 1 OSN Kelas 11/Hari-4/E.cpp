#include<bits/stdc++.h>
using namespace std;
int tes,is,i;
string as,bs,kata[30];
string  a,b,c,d,e,f;
bool cek;
int main(){
cin>>tes;
for(is=0;is<tes;is++){
	for(i=0;i<24;i++)kata[i]="";
	cin>>as>>bs;
	a=as[0];b=as[1];c=as[2];d=as[3];e=as[4];f=as[5];
	kata[0]+=a+b+c+d+e+f;
	kata[1]+=a+b+d+e+f+c;
	kata[2]+=a+b+e+f+c+d;
	kata[3]+=a+b+f+c+d+e;
	kata[4]+=b+a+d+c+f+e;
	kata[5]+=b+a+c+f+e+d;
	kata[6]+=b+a+f+e+d+c;
	kata[7]+=b+a+e+d+c+f;
	kata[8]+=c+e+b+d+a+f;
	kata[9]+=c+e+d+a+f+b;
	kata[10]+=c+e+a+f+b+d;
	kata[11]+=c+e+f+b+d+a;
	kata[12]+=d+f+b+e+a+c;
	kata[13]+=d+f+e+a+c+b;	
	kata[14]+=d+f+a+c+b+e;
	kata[15]+=d+f+c+b+e+a;
	kata[16]+=e+c+b+f+a+d;
	kata[17]+=e+c+f+a+d+b;
	kata[18]+=e+c+a+d+b+f;
	kata[19]+=e+c+d+b+f+a;
	kata[20]+=f+d+b+c+a+e;
	kata[21]+=f+d+c+a+e+b;
	kata[22]+=f+d+a+e+b+c;
	kata[23]+=f+d+e+b+c+a;
	cek=false;
	for(i=0;i<24;i++){		
		if(bs==kata[i]){
			cek=true;
		}
		//cout<<kata[i]<<endl;
	}
	if(cek==true)cout<<"Equal"<<endl;
	else cout<<"Not Equal"<<endl;
	}
}