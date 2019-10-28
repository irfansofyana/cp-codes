#include <bits/stdc++.h>
using namespace std;
int main(){
	char c;
	char A[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',':','z','x','c','v','b','n','m',',','.','/'};
	int i,j;
	string s;
	bool p;
	
	cin>>c;
	cin>>s;
	if (c=='R'){
		for (i=0;i<=s.length()-1;i++){
			p=false;
			j=0;
			while ((j<=29) && (!p)) {
				if (s[i]==A[j])
					p=true;
				else
				j++;
			}
			s[i]=A[j-1];
		}
	}
	else if (c=='R'){
		for (i=0;i<=s.length()-1;i++)
		{
			p=false;
			j=0;
			while ((j<=29) && (!p)) {
				if (s[i]==A[j])
					p=true;
				else
				j++;
			}
			s[i]=A[j+1];
		}
	cout<<s<<endl;
	return 0;
}
}