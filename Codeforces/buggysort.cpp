#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int temp;
	int A[100];
	
	cin>>n;
		if (n<=2)
		cout<<-1<<endl;
	else
		{
			for (i=n;i>=1;i--){
				if (i!=1)
					cout<<i<<" ";
				else
					cout<<i<<endl;
			}
		}
}