#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int x;
	int a,b,c;
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a>>b>>c;
		if (a*b==c){
			printf("%d * %d = %d\n",a,b,c);
		}
		else if (double(a)/b==double(c))
			printf("%d / %d = %d\n",a,b,c);
		else if (a+b==c){
			printf("%d + %d = %d\n",a,b,c);
		}
		else if (a-b==c)
			printf("%d - %d = %d\n",a,b,c);
		else if (a%b==c)
			cout<<a<<" "<<"%"<<" "<<b<<" "<<"="<<" "<<c<<endl;
	}
}
