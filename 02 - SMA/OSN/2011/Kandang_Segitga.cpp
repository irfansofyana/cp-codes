#include <bits/stdc++.h>
using namespace std;

int n,i,j,k;
int x[100],y[100];
double luas;
int ans;

int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
	for (i=0;i<n;i++) 
		for (j=i+1;j<n;j++)
			for (k=j+1;k<n;k++){
				luas = (x[i]*y[k]+x[j]*y[i]+x[k]*y[j]-x[j]*y[k]-x[i]*y[j]-x[k]*y[i])/2.0;
				if (luas!=0) ans++;
			}
	printf("%d\n",ans);
}
