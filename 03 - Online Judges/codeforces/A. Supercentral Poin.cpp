#include <bits/stdc++.h>
using namespace std;
int n,i,j,r,le,u,low,ans;
int x[210],y[210];

int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x[i]>>y[i];
	}
	for (i=0;i<n;i++){
		r=0; le=0; u=0; low=0;
		for (j=0;j<n;j++){
			if (i!=j){
			if (x[j]>x[i] && y[j]==y[i]) r++;
			else if (x[j]<x[i] && y[j]==y[i]) le++;
			else if (x[j]==x[i] && y[j]<y[i]) low++;
			else if (x[j]==x[i] && y[j]>y[i]) u++;
			}
		}
		if (r>=1 && le>=1 && low>=1 && u>=1) ans++;
	}
	cout<<ans<<endl;
}
