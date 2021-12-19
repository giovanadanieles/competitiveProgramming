#include <bits/stdc++.h>
using namespace std;

// Memory complexity: O(1)
//   Time complexity: ceil(log_10(n))

int main(int argc, char* const argv[]){
	long long int number;
	int nLucky = 0;

	cin >> number;

	while(number > 0){
		if(number % 10 == 7 || number % 10 == 4) nLucky++;

		number /= 10;
	}

	if(nLucky == 7 || nLucky == 4) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}