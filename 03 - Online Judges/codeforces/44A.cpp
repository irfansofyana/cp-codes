#include <bits/stdc++.h>
using namespace std;

int n,i,j;
map< string,int > mep;
string s,nama[100];
int main(){
	cin>>n;
	cin.ignore();
	while (n--){
		getline(cin,s);
		if (mep[s]==0){
			nama[i]=s;
			i++;
		}
		mep[s]+=1;
	}
	cout<<i<<endl;
}
