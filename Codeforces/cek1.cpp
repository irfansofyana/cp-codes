#include <bits/stdc++.h>
using namespace std;
int main(){
	int A[20];
	A[1]=3;
	for (int i=2;i<=19;i++){
		A[i]=2*A[i-1]+1;
	}
	for (int i=1;i<=15;i++) cout<<A[i]<<" ";
	cout<<endl;
}
