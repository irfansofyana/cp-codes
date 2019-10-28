#include <bits/stdc++.h>
using namespace std;

bool squarefree(int num){
	bool c=true;
	for (int i=2;i<=int(sqrt(num));i++){
		if (num%i==0){
			int j=0;
			while (num%i==0){
				j++;
				num/=i;
			}
			if (j>1) {
				c=false;
				break;
			}
		}
	}
	return c;
}
int main(){
	int n;
	cin>>n;
	cout<<(squarefree(n)?"YES":"NO")<<endl;
}
