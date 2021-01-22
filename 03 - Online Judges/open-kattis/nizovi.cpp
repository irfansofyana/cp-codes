#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j;
int spasi;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> s;
	i = 0;
	while (i < s.size()){
		if (s[i] == '{') {
			for (int z = 0 ; z < spasi ; z++) cout << " ";
			cout << "{\n";
			spasi += 2;
			i++;
		}
		else if (s[i] == '}') {
			spasi -= 2;
			if (i >= 1 && s[i-1] >= 'a' && s[i-1] <= 'z') cout << '\n';
			for (int z = 0 ; z < spasi; z++) cout << " ";
			cout << "}";
			if ((i+1 < s.size() && s[i+1] != ',') || (i == (int)s.size()-1)) cout << '\n';
			i++;
		}
		else if (s[i] == ',') {
			cout << ",\n";
			i++;
		}
		else {
			for (int z = 0 ; z < spasi; z++) cout << " ";
			string temp = "";
			temp += s[i];
			j = i+1;
			while (j < s.size() && s[j] >= 'a' && s[j] <= 'z') {
				temp = temp + s[j];
				j++;
			}
			i = j;
			cout << temp ;
		}
	}
	return 0;
	
}