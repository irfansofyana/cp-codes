#include <bits/stdc++.h>
using namespace std;

struct database{
	long long min,maks;
	string nama;
};

int main(){
	ios_base::sync_with_stdio(0);
	int x,y,n,i,j,q,k,idx;
	int c,pert,stat;
	database A[10000];
	string temp,s[10000];
	
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>stat;
		for (j=0;j<stat;j++){
			cin>>temp>>x>>y;
			A[j].nama=temp;
			A[j].min=x;
			A[j].maks=y;		
		}
		cin>>pert;
		for (j=0;j<pert;j++){
			cin>>q;
			c=0;
			for (k=0;k<stat;k++){
				if (q>=A[k].min && q<=A[k].maks){
					c++;
					idx=k;
				}
			}
				if (c==1)
					s[j]=A[idx].nama;
				else
					s[j]="UNDETERMINED";	
		}
			cout<<"Case #"<<i<<":"<<endl;
			for (k=0;k<pert;k++){
				cout<<s[k]<<endl;
			}
	}
}
