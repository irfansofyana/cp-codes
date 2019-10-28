#include <iostream>
#include<algorithm>
using namespace std;
string m;
int main()
{
cin >> m;
	int64_t mid=m.find('^'),s=0;
	for (int i=0;i<m.size();i++)
	if (m[i]-'0'>=0 && m[i]-'0'<=9) { s+=(i-mid)*(m[i]-'0');}
	if (s>0) cout << "right"; else if (s<0) cout << "left"; else cout << "balance";
	return 0;
}
