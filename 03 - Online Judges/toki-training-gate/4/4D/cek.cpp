#include<bits/stdc++.h>
using namespace std;
string kali,kata;
int x,y,i,j,b,k;
bool bak=false;
char a[150][150];
int main()
{
	cin>>x>>y;
	for(i=0;i<x;i++){
	for(j=0;j<y;j++){
		cin>>a[i][j];
	}
	}
	cin>>b;
	for(k=0;k<b;k++){
		cin>>kata;kali="";
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				if(a[i][j]==kata[0]){
					int zi=i;int zj=j;
					int yi=i;int yj=j;
					int ioi=i;int ioj=j;
					int oii=i;int oij=j;
					int iii=i;int iij=j;
					int iiii=i;int iiij=j;
				while(zi>=0){
				kali+=a[zi][j];zi--;}kali+=" ";cout<<kali<<"1"<<endl;
				while(zj>=0){
				kali+=a[i][zj];zj--;}kali+=" ";cout<<kali<<"2"<<endl;
				while(yi<=x){
				kali+=a[yi][j];yi++;}kali+=" ";cout<<kali<<"3"<<endl;
				while(yj<=y){
				kali+=a[i][yj];yj++;}kali+=" ";cout<<kali<<"4"<<endl;
				while(ioi>=0&&ioj>=0){
				kali+=a[ioi][ioj];
				ioi--;ioj--;
				}kali+=" ";cout<<kali<<"5"<<endl;
				while(oii>=0&&oij<=y){
				kali+=a[oii][oij];
				oii--;oij++;
				}kali+=" ";cout<<kali<<"6"<<endl;
				while(iii<=x&&iij<=y){
				kali+=a[iii][iij];
				iii++;iij++;
				}kali+=" ";cout<<kali<<"7"<<endl;
				while(iiii<=x&&iiij>=0){
				kali+=a[iiii][iiij];
				iiii++;iiij--;
				}	kali+=" ";cout<<kali<<"8"<<endl;
				if(kali.find(kata)!=string::npos){
				 bak=true;break;
				}else bak=false;
				cout<<kali<<endl;
			}	
		}
	}if(bak==true)cout<<kata<<" Y"<<endl;else cout<<kata<<" T"<<endl;
}
}