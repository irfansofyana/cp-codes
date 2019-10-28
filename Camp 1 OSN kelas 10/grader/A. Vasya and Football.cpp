#include <bits/stdc++.h>
using namespace std;

int n,i,j,x,y;
string home,away;
char temp1,temp2;
int A[120],H[120];
bool ba[120],bh[120];
int main(){
	cin.tie(0);
	cin>>home;
	cin>>away;
	for (i=0;i<119;i++){
		ba[i]=true;
		bh[i]=true;
	}
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>x>>temp1>>y>>temp2;
		if (temp2=='r'){
			if (temp1=='a' && ba[y]){
				cout<<away<<" "<<y<<" "<<x<<endl;
				ba[y]=false;
			}
			else if (temp1=='h' && bh[y]){
				cout<<home<<" "<<y<<" "<<x<<endl;
				bh[y]=false;
			}
		}
		else if (temp2=='y'){
			if (temp1=='a')
				A[y]+=1;
			else if (temp1=='h')
				H[y]+=1;
			}
			
		if (A[y]==2 && ba[y]){
				A[y]=0;
				cout<<away<<" "<<y<<" "<<x<<endl;
				ba[y]=false;
		}
		else if (H[y]==2 && bh[y]){
				cout<<home<<" "<<y<<" "<<x<<endl;
				H[y]=0;
				bh[y]=false;
		}
	}
}
