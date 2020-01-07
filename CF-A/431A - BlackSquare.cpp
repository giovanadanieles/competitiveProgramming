#include <bits/stdc++.h>
using namespace std;

int main(){
	int c[6], solve = 0, aux;
	string s;

	for(int i = 1; i < 5; i++){
		cin >> c[i];
	}

	cin >> s;

	for(unsigned int i = 0; i < s.size(); i++){
		aux = (int)s[i] - 48;
		solve += c[aux];
	}

	cout << solve << endl;

	return 0;
}