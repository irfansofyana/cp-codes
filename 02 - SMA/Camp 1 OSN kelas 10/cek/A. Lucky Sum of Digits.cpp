#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int i,j,k,l=1,tmin,emin,min;
	int bilangan;
	bool p=true;
	
	cin>>n;
	k=-1;
	while (k>=-500000){
		if (7*k+2*n>=0 && n+4*k<=0){
			if (l==1){
				min=n+3*k;
				tmin=-(n+4*k);
				emin=7*k+2*n;
				l++;
			}
			else{
				if (n+3*k<min){
					min=n+3*k;
					tmin=-(n+4*k);
					emin=7*k+2*n;
				}
			}
			p=false;
			k=k-1;
		}
		else
		k=k-1;
	}
	if (p)
		cout<<-1<<endl;
	else{
		for (i=1;i<=emin;i++)
			cout<<4;
		for (j=1;j<=tmin;j++)
			cout<<7;
		cout<<endl;
	}
}
