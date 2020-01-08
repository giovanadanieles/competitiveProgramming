#include <bits/stdc++.h>
using namespace std;

int main(){
	set <int> s;
	int aux;

	for(int i = 0; i < 4; i++){
		cin >> aux;
		s.insert(aux);
	}

	cout << 4 - s.size() << endl;

	return 0;
}