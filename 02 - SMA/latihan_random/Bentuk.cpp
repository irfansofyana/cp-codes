#include <bits/stdc++.h>
#define irfan using
#define ganteng namespace
#define banget std

irfan ganteng banget;

int main(){
	int n;
	cin>>n;
	if (n%2==0){
		for (int i=1;i<=n;i++){
			if (i==1 || i==n){
				for (int j=1;j<=n;j++) cout<<'*';
			}
			else{
				for (int j=1;j<=n;j++){
					if ((j==1) || (j==n)) cout<<'*';
					else cout<<" ";
				}
			}
			cout<<endl;
		}
	}
	else{
		for (int i=1;i<=n;i++){
			if (i==(n/2)+1){
				for (int j=1;j<=n;j++) cout<<'*';
			}
			else for (int j=1;j<=n;j++){
				if (j==(n/2)+1) cout<<'*';
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
