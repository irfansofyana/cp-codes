#include <bits/stdc++.h>
using namespace std;
char peta[10][10];
bool tf=true;
int i,j;
bool cekganjil(int p){
	int c=0; bool ck=true;
	for (int k=0;k<7;k++){
		if (peta[p][k]==peta[p][k+1] && peta[p][k]=='B') {
			ck=false;
			break;
		}
		else if (peta[p][k]==peta[p][k+1]) c++;
	}
	if (c>=2) ck=false;
	return ck;
}
bool cekgenap(int p){
	int c=0; bool ck=true;
	for (int k=0;k<7;k++){
		if (peta[p][k]==peta[p][k+1] && peta[p][k]=='W') {
			ck=false;
			break;
		}
		else if (peta[p][k]==peta[p][k+1]) c++;
	}
	if (c>=2) ck=false;
	return ck;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	for (i=0;i<8;i++){
		for (j=0;j<8;j++){
			cin>>peta[i][j];
		}
		if ((i+1)%2==1 && !cekganjil(i)) tf=false; 
		else if ((i+1)%2==0 && !cekgenap(i)) tf=false;
	}
	cout<<(tf?"YES":"NO")<<endl;
	return 0;
}
