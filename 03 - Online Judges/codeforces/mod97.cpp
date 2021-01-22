#include <bits/stdc++.h>
using namespace std;

int i,j,hasil;
int A[100];

void ngisi(){
	A[1]=1;
	int i;
	for (i=2;i<=40;i++){
		A[i]=(i*A[i-1])%97;
	}
}

int main(){
	ngisi(); hasil=0;
	for (i=1;i<=40;i++){
		hasil+=(((i*i*i-1))*A[i])%97;
		if (hasil>97) hasil=hasil%97;
	}
	cout<<hasil<<endl;
	return 0;
}
