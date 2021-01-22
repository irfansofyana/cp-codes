#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n;
	int B[1000],sebelumb;
	double total=0;
	char A[1000];
	char sebelum;
	
	cin>>n;
	cin>>A[0]>>B[0];
	sebelum=A[0];
	sebelumb=B[0];
	for (i=1;i<n;i++)
		{
			cin>>A[i]>>B[i];
			if ((B[i]!=sebelumb) && (A[i]!=sebelum))
				total=total+0.5;
				
			else if ((B[i]==sebelumb) && (A[i]!=sebelum))
				total=total+0.3;
			else if ((B[i]!=sebelumb) && (A[i]==sebelum))
				total=total+0.2;
			else 
				total=total+0.1;
			sebelum=A[i];
			sebelumb=B[i];
		}
	cout<<fixed<<showpoint;
	cout<<setprecision(1);
	cout<<total<<endl;
	return 0;
}