#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m=1;
	cin>>n;
	if(n>=3&&n!=4){
		if(n%2==0&&n%3==0){
			m=(n-1)*(n-2)*(n-3);
		}
		else if(n%2==0){
			m=n*(n-1)*(n-3);
		}
		else m=n*(n-1)*(n-2);
	}
	else if(n==4)m=12;
	else m=n;
	cout<<m<<endl;
}