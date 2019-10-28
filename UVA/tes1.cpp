#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(){
    int n;
    for (int i = 1; i <= 10; i++) 
    	arr.push_back(i);
   	arr.erase(arr.begin() + 1, 3);
   	for (auto a : arr) {
   		cout << a << " ";
   	} cout << '\n';
    return 0;
}
