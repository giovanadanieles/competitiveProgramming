#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int number, index = 0;
	int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

	cin >> number;

	for(; index < 14; index++){
		if(number % lucky[index] == 0) break; 
	}

	if(index < 14) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}