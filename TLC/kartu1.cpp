#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,ayam=0,bebek=0;
	int maks=0,A[100];
	char c;
	
	for (i=1;i<=6;i++){
		cin>>A[i]>>c;
		if (c=='A'){
			ayam++;
		}
		else if (c=='B'){
			bebek++;
		}
	}
	cout<<ayam<<" "<<bebek<<endl;
}
