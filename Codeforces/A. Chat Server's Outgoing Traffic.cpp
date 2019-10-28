#include <bits/stdc++.h>
using namespace std;
int i,j,banyak,jawab;
char temp;
string nama;

int main(){
	cin.tie(0);
	while (cin>>temp) {
		if (temp=='+') {
			cin>>nama;
			banyak++;
		}
		else if (temp=='-') {
			cin>>nama;
			banyak-=1;
		}
		else {
			cin>>nama;
			nama=temp+nama;
			cin>>temp;
			string pesan;
			getchar();
			getline(cin,pesan);
			jawab+=(pesan.length()*banyak);
		}
	}
	cout<<banyak<<endl;
	cout<<jawab<<endl;
	return 0;
}
