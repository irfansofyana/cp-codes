#include <bits/stdc++.h>
using namespace std;

string temp,input,s[12];
int	i;

int main(){
	cin >> input;
	for (int z=0;z<10;z++) cin>>s[z];
	i=0;
	for (int z=1;z<=8;z++){
		temp=input.substr(i,10);
		for (int z=0;z<10;z++){
			if (s[z]==temp){
				cout<<z;
				break;
			}
		}
		i+=10;
	}
	cout<<"\n";
	return 0;
}
