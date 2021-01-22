#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long bilangan,b;
int main(){
	ios_base::sync_with_stdio(0);
	
	cin>>n>>k;
	if (n%2==0 && k<(n/2))
		cout<<-1<<endl;
	else if (n%2==1 && k<=(n/2-1))
		cout<<-1<<endl;
	else{
		if (n%2==0){
			if (k==n/2){
				for (int i=1;i<=n;i++){
					if (i!=n)
						cout<<i<<" ";
					else
						cout<<i<<endl;
				}
			}
			else{
				bilangan=k-n/2+1;
				cout<<bilangan*2<<" "<<bilangan*3<<" ";
				b=bilangan*4+1;
				for (int i=3;i<=n;i++){
					if (i!=bilangan*2 && i!=bilangan*3){
						if (i!=n)
							cout<<i<<" ";
						else
							cout<<i<<endl;
					}
					else{
						if (i!=n){
							if (b!=bilangan*2 && b!=bilangan*3)
								cout<<b<<" ";
							else
								cout<<b+1<<" ";
						}
						else{
							if (b!=bilangan*2 && b!=bilangan*3)
								cout<<b<<" ";
							else
								cout<<b+1<<" ";
						}
						b++;
					}
				}
			}
		}
	}	
}
