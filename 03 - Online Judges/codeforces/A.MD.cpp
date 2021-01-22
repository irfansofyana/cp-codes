#include <bits/stdc++.h>
using namespace std;

int n,A[1010],B[1010];
int maks,temp;
int  j;

int main(){
	cin.tie(0);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>A[i];
	}
	for (int i=1;i<=n-2;i++){
		maks=0;
		j=0;
		while (j<n-1){
			if (j+1==i){
				temp=A[i+1]-A[j];
				if (temp>maks) maks=temp;
				j=i+1;
			}
			else{
				temp=A[j+1]-A[j];
				if (temp>maks) maks=temp;
				j++;
			}
		}
		B[i-1]=maks;
	}
	sort(B,B+n-2);
	cout<<B[0]<<endl;
	return 0;
}