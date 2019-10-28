#include <bits/stdc++.h>
using namespace std;

int n,i,j,depan,belakang;
string input;
string temp,jawab;
bool cek;
char c;
int main(){
	cin.tie(0);
	cin>>input;
	temp="";
	for (j=0;j<=input.length();j++){
		cek=true;
		jawab="";
		temp=input.substr(0,j)+" "+input.substr(j,input.length()-1-j+1);
		depan=0; belakang=temp.length()-1;
		while (depan<=belakang){
			if ((temp[depan]==' ') || (temp[belakang]==' ')){
				if (temp[depan]==' ') c=temp[belakang];
				else c=temp[depan];
				depan++;
				belakang--;
			}
			else{
				if (temp[depan]!=temp[belakang]){
					cek=false;
					break;
				}
				else{
					depan++;belakang--;
				}
			}
		}
		if (cek){
			for (i=0;i<temp.length();i++){
				if (temp[i]!=' ') jawab=jawab+temp[i];
				else jawab=jawab+c;
			}
			cout<<jawab<<endl;
			break;
		}
	}
	if (!cek) cout<<"NA"<<endl;
return 0;
}
