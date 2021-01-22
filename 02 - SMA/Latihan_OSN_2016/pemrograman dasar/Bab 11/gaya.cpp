#include <bits/stdc++.h>
using namespace std;

string s;
int pos,n,i,j,_last;
vector<string> temp;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	pos = s.find('_'); _last = 0;
	if (pos >= 0 && pos < (int)s.size() ){
		while (pos >= 0 && pos < (int)s.size()){
			temp.push_back(s.substr(_last,pos-_last));
			_last = pos+1;
			pos = s.find('_',pos+1);
		}
		temp.push_back(s.substr(_last,(int)s.size()-_last));
		for (i = 0 ; i < temp.size(); i++){
			if (i==0) cout << temp[i];
			else {
				cout << char((int)temp[i][0]-32) << temp[i].substr(1,(int)temp[i].size()-1);
			}
		}
		cout << '\n';
	}
	else {
		_last = 0;
		for (i = 0 ; i < (int)s.size(); i++){
			if (s[i]>='A' && s[i] <= 'Z') {
				temp.push_back(s.substr(_last,i-_last));
				_last = i;
			} 
		}
		temp.push_back(s.substr(_last,(int)s.size()-_last));
		if (temp.size()==0) cout << s << '\n';
		else {
			for (i = 0 ; i < temp.size(); i++){
				if (i==0) cout << temp[i];
				else {
					cout << '_';
					cout << char((int)temp[i][0]+32) << temp[i].substr(1,(int)temp[i].size()-1);
				}
			}
			cout << '\n';
		}
	}
	return 0;
}