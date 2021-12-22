#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int n;
	string op;
	unordered_map<char, int> values;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> op;

		if(op[0] == '+' || op[1] == '+') values['+']++;
		else values['-']++;
	}

	cout << values['+'] - values['-'] << endl;

	return 0;
}