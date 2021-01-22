#include <bits/stdc++.h>
using namespace std;

int n,i,j;
string s,temp;

string ubah(int k){
	stringstream ss;
	ss<<k;
	return ss.str();
}

int main(){
	cin.tie(0);
	while (cin>>s && s!="END") {
		i = 0;
		while (1==1) {
			i++;
			temp = ubah((int)s.size());
			//cout << temp << endl;
			if (temp==s) break;
			else s = temp;
		}
		cout << i << endl;
	}
	return 0;
}