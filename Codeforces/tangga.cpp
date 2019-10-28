#include <bits/stdc++.h>
using namespace std;
long long n,m,i,j,x,start;
bool cek=true;
long long kotor[5000];
int main(){
	cin.tie(0);
	cin>>n>>m;
	for (i=0;i<m;i++){
		cin>>kotor[i];
	}
	sort(kotor,kotor+m);
	if (kotor[m-1]==n || kotor[0]==1) cek=false;
	else{
		i=0;
		start=1;
		i=0;
		while (i<m){
			if (kotor[i+2]-kotor[i+1]==1 && kotor[i+1]-kotor[i]==1){
				cek=false;
				break;
			}
			else i++;
		}
	}
	if (cek) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
