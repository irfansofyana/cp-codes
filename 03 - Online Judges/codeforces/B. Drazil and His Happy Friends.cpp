#include <bits/stdc++.h>
using namespace std;
int n,m,i,j,b,g,idx;
int boy[110],girl[110];
bool ans;
int fpb(int x,int y){
	if (y==0) return x;
	else return fpb(y,x%y);
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n>>m;
	cin>>b;
	for (i=0;i<b;i++){
		cin>>idx;
		boy[idx]=1;
	}
	cin>>g;
	for (i=0;i<g;i++){
		cin>>idx;
		girl[idx]=1;
	}
//	cout<<fpb(n,m)<<endl;
	for (i=0;i<=100000;i++){
		if (boy[i%n]==1 && girl[i%m]==0) girl[i%m]=1;
		else if (boy[i%n]==0 && girl[i%m]==1) boy[i%n]=1;
	//	cout<<boy[i%n]<<" "<<girl[i%n]<<endl; 
	} ans=true;
	/*for (i=0;i<n;i++) cout<<boy[i]<<" ";
	cout<<endl;
	for (i=0;i<m;i++) cout<<girl[i]<<" ";
	cout<<endl; */
	for (i=0;i<n;i++){
		if (boy[i]==0) {
			ans=false;
			break;
		}
	}
	if (ans){
		for (i=0;i<m;i++){
			if (girl[i]==0) {
				ans=false;
				break;
			}
		}
		cout<<(ans==true?"Yes":"No")<<endl;
	}
	else cout<<"No"<<endl;
	return 0;
}
