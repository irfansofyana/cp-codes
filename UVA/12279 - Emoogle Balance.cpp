#include <bits/stdc++.h>
using namespace std;
int a,b,n;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	int idx=1;
	while (cin>>n && n!=0){
		int temp;
		a=0; b=0;
		for (int i=1;i<=n;i++){
			cin>>temp;
			if (temp==0) b++;
			else a++;
		}
		cout<<"Case "<<idx<<": "<<a-b<<endl; idx++;
	}
	return 0;
}
