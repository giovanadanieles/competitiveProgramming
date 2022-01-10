#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	vector<int> even, odd;
	int totalNumbers, aux;

	cin >> totalNumbers;

	for(int i = 1; i <= totalNumbers; i++){
		cin >> aux;

		if(aux % 2 == 0) even.push_back(i);
		else odd.push_back(i);
	}

	even.size() == 1 ? cout << even[0] << endl : cout << odd[0] << endl;

	return 0;
}