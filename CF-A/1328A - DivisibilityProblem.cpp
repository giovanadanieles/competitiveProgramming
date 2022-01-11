#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nTests, a, b;

	cin >> nTests;

	for(int i = 0; i < nTests; i++){
		cin >> a >> b;

		if(a % b == 0) cout << 0 << endl;
		else cout << b - (a % b) << endl;
	}

	return 0;
}