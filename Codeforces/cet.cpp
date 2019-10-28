
/*vector ==> struktur data yang mirip dengan array.
vector ==> array dinamis

array : <type_data> nama[];
		int arr[1005];

vector : vector<type_data> nama;
		 vector<int> arr;*/
#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
stack<int> st;	//LIFO  (Last In First OUT)
				//5 6 7 9

queue<int> antrian;	//FIFO (First in FIrst OUT)
					//1 2 7 8 10

int main(){
	int x;
	cin >> x;
	/*arr.push_back(x);
	arr.push_back(10000);
	for (auto a : arr) {
		cout << a << " ";
	}cout << '\n'; */
	while (x--) {
		int m;
		cin >> m;
		st.push(m);
	}
	cout << '\n';	
	//untuk mengetahui paling atas: st.top()
	//cara ngeluarin semua elemen nya :
	while (!st.empty()){
		cout << st.top() << '\n';
		st.pop();
	}

	while (!antrian.empty()) {
		cout << antrian.front() << '\n';
		antrian.pop();
	}
	return 0;
}



