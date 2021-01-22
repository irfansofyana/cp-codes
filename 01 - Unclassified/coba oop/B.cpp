#include "B.h"
#include <iostream>

using namespace std;

B::B(){
	x = -100;
}

B::B(int c){
	x = c;
}

void B::cetak(){
	cout << p << " " << q << '\n';
}