#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[30],B[30];
string a,b,temp;

int main(){
	cin.tie(0);
	while (getline(cin,a)) {
		getline(cin,b);
			memset(A,0,sizeof A); memset(B,0,sizeof B);
			for (i = 0 ; i < a.size() ; i++) 
				A[a[i]-'a']++;
			for (i = 0 ; i < b.size() ; i++)
				B[b[i]-'a']++;
			temp = "";
			for (i = 0; i < 26 ; i++) {
				for (j = 0 ; j < min(A[i],B[i]) ; j++)
				temp = temp+char(i+'a');
			}
			if (temp!="")cout << temp << endl;
			else cout << endl;
	}
	return 0;
}