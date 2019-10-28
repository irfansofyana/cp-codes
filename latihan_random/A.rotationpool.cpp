#include <bits/stdc++.h>
using namespace std;

int n,i,ja,jb;
int temp;
int main(){
	cin>>n;
	while (n!=0){
		ja=0;jb=0;
		for (i=1;i<=15;i++){
			cin>>temp;
			if (i<=n) ja+=temp;
			else jb+=temp;
		}
		cout<<abs(ja-jb)<<endl;
		cin>>n;
	}
	return 0;
}
