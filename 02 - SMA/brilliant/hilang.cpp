#include <bits/stdc++.h>
using namespace std;

int A[100001];

int main(){
	for (int i=1;i<=99999;i++){
		int temp;
		cin>>temp;
		A[temp]=1;
	}
	for (int i=1;i<=100000;i++){
		if (A[i]==0) {
			cout<<i<<endl;
			break;
		}
	}
}
