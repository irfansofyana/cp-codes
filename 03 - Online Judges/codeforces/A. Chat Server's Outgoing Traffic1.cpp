#include <bits/stdc++.h>
using namespace std;
int i,j,banyak,jawab;
char temp;
string nama,input;

int main(){
	cin.tie(0);
	while (getline(cin,input)) {
		getchar();
		if (input[0]=='+'){
			banyak++;
		}
		else if (input[0]=='-'){
			banyak-=1;
		}
		else {
			cout<<input<<endl;
		}
	}
	//cout<<banyak<<endl;
	cout<<jawab<<endl;
	return 0;
}
