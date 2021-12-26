#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int stops, exit, enter, actual = 0, max_ = 0;

	cin >> stops;

	for(int i = 0; i < stops; i++){
		cin >> exit >> enter;

		actual = actual - exit + enter;

		max_ = max(actual, max_);

	}

	cout << max_ << endl;

	return 0;
}