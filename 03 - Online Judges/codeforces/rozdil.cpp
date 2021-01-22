#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,i;
	long long min;
	long long A[100000];
	long long idx[100000],c[100];
	
	
	cin>>n;
	memset(idx,0,sizeof(idx)); 
	for (i=0;i<n;i++){
		cin>>A[i];
		if (i==0){
			min=A[i];
			idx[min]++;
			c[min]=i+1;
		}
		else if (A[i]<=min){
				if (A[i]==min)
					idx[min]++;
				else 
					{
						min=A[i];
						idx[min]++;
						c[min]=i+1;
					}
			}
	}
	if (idx[min]==1)
		cout<<c[min]<<endl;
	else
		cout<<"Still Rozdil"<<endl;
	return 0;
}
