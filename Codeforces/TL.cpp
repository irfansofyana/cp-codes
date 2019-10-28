#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,jawaban=0,extra=0,k;
	int A[1000],B[1000];
	bool p=true,q=true;;
	
	cin>>n>>m;
	for (i=0;i<n;i++)
		cin>>A[i];
	for (i=0;i<m;i++)
		cin>>B[i];
	j=2;
	while (j<=100){
		i=0;
		extra=0;
		p=true;
		while ((i<n) && (p)){
			if ((A[i]<=j) || (2*A[i]<=j)){
				if (2*A[i]<=j)
					extra++;
				i++;
			}
			else
				p=false;
		}
		if ((p==false) || (extra==0))
			j++;
		else if ((p==true) || (extra>0))
			{
				k=0;
				while ((k<m) && (q)){
					if ((B[k]<=j) || (2*B[k]<=j))
						q=false;
					else
						k++;
				}
				if (q==true)
					{
						jawaban=j;
						break;
					}
				else if (q==false)
					j++;
			}
	}
	if (jawaban==0)
		cout<<-1<<endl;
	else
		cout<<jawaban<<endl;
	return 0;
}