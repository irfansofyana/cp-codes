#include <bits/stdc++.h>
using namespace std;

string s[3];
string A[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
int i,j,urutan[3]={0,1,2};

bool minor=false,major=false;
int posisi(string s){
	for (int z=0;z<12;z++)
		if (A[z]==s) return z;
}

int jarak(string a,string b){
	int temp1,temp2;
	temp1 = posisi(a);
	temp2 = posisi(b);
	if (temp1<temp2) return temp2-temp1;
	else return (12+temp2)-temp1;
}
int main(){
	cin.tie(0);
	for (i=0;i<3;i++) cin >> s[i];
	minor = major = false;
	do {
		//for (i=0;i<3;i++) 
		//	cout << s[urutan[i]] << endl;
		if (jarak(s[urutan[0]],s[urutan[1]])==3 && jarak(s[urutan[1]],s[urutan[2]])==4) {
			minor = true;
		}
		else if (jarak(s[urutan[0]],s[urutan[1]])==4 && jarak(s[urutan[1]],s[urutan[2]])==3) {
			major = true;
		}
	} while (next_permutation(urutan,urutan+3));
	if (!minor && !major) puts("strange");
	else if (minor) puts("minor");
	else if (major) puts("major");
}
