#include <bits/stdc++.h>
using namespace std;
int main(){
	string A,B,temp;
	int i,j;
	bool p=false;
	
	cin>>A;
	cin>>B;
	if (B.length()!=A.length()-1)
		cout<<"Wah, tidak bisa :("<<endl;
	else{
		for (i=0;i<A.length();i++){
			temp=A;
			if (temp.erase(i,1)==B){
				p=true;
				cout<<"Tentu saja bisa!"<<endl;
				break;
			}
		}
		if (!p)
			cout<<"Wah, tidak bisa :("<<endl;
	}
}
