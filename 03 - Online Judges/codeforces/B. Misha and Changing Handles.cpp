#include <bits/stdc++.h>
using namespace std;

int n,q,i,j;
int state[1010];
string baru[1010],lama[1010];
string jawaban1[1010],jawaban2[1010];
string temp1,temp2;
bool cek;

int main(){
	cin.tie(0);
	cin>>q;
	n=0;
	for (i=0;i<q;i++){
		cin>>lama[i]>>baru[i];
		state[i]=1;
	}
	for (i=0;i<q;i++){
		cek=false;
		if (state[i]==1){
			temp1=lama[i];
			temp2=baru[i];
			cek=true;
			for (j=0;j<q;j++){
				if (state[j]==1 && lama[j]==temp2){
					temp2=baru[j];
					state[j]=0; cek=true;	
				}
			}
			if (cek){
				jawaban1[n]=temp1;
				jawaban2[n]=temp2;
				n++;
			}
		}
	}
	cout<<n<<endl;
	for (i=0;i<n;i++){
		cout<<jawaban1[i]<<" "<<jawaban2[i]<<endl;
	}
	return 0;
}
