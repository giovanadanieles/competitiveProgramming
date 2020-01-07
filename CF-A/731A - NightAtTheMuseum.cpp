#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int solve = 0, aux, ac = 1;

	for(unsigned int i = 0; i < s.size(); i++){
		aux = s[i] - 96;
		solve+= min(abs(ac - aux), 26 - abs(ac - aux));
		ac = aux;
	}

	cout << solve << endl;

	return 0;
}