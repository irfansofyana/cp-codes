#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,a,b,v;
	int i,j;
	int box=0;
	
	cin>>k>>a>>b>>v;
	while (a>0){
		if (k-1<=b){
			a=a-(k*v);
			b=b-(k-1);
			box++;
		}
		else if (k-1>b){
			if (b>0){
				a=a-(b+1)*v;
				b=0;
				box++;
			}
			else if (b==0){
				a=a-v;
				box++;
			}
		}
	}
	cout<<box<<endl;
}
