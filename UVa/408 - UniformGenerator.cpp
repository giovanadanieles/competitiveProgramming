#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;

	return gcd(b, a % b);
}

int main(int argc, char* const agrv[]){
	int step, mod;

	while(cin >> step && cin >> mod){
		for(unsigned int b = 0; b < 10 - to_string(step).size(); b++) cout << " ";
		cout << step;

		for(unsigned int b = 0; b < 10 - to_string(mod).size(); b++) cout << " ";
		cout << mod;

		if(gcd(mod, step) == 1) cout << "    Good Choice";
		else cout << "    Bad Choice";

		cout << endl << endl;
	}

	return 0;
}