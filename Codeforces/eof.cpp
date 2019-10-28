#include <iostream>
#include <string>
using namespace std;

int main()
  {
  int n = 0;
  string s;
  int k;
  cin>>k;
  while (getline( cin, s ))
    {
    	cout << n++ << ": " << s << endl;
    }
  //cout << n << ": " << s << endl;  // last line
  return 0;
  }
