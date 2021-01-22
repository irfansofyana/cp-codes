#include <bits/stdc++.h>
using namespace std;
long long A[110],n,i,j;
bool ada=false;
void isi(){
	A[0]=0; A[1]=1;
	for (i=2;i<=50;i++) A[i]=A[i-1]+A[i-2];
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	isi();
	cin>>n;
	for (i=0;i<=50;i++){
		if (A[i]==n){
			ada=true; break;
		}
	}
	if (!ada) cout<<"I'm too stupid to solve this problem"<<endl;
	else if (n==0) cout<<0<<" "<<0<<" "<<0<<endl;
	else if (n==1) cout<<1<<" "<<0<<" "<<0<<endl;
	else if (n==2) cout<<1<<" "<<1<<" "<<0<<endl;
	else cout<<A[i-1]<<" "<<A[i-3]<<" "<<A[i-4]<<endl;
	return 0;
}
