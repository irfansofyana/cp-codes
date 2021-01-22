#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mep;
    mep[12] = 14;
    mep[13] = 200;
    map<int,int>::iterator it = mep.find(200);
    printf("%d\n", *it);
    return 0;
}