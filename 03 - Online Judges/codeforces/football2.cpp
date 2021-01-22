#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,k=1;
	string s,sementara1,sementara2;
	int skor1=0,skor2=0;
	
	cin>>n;
	cin>>sementara1;
	skor1++;
	for (i=1;i<n;i++){
		cin>>s;
		if (s==sementara1)
			skor1++;
		else{
			if (k==1){
				sementara2=s;
				skor2++;
				k++;
			}
			else
				skor2++;
		}
	}
	if (skor1>skor2)
		cout<<sementara1<<endl;
	else if (skor1<skor2)
		cout<<sementara2<<endl;
}
