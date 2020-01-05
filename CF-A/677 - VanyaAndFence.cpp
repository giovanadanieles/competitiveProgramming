#include <bits/stdc++.h>
using namespace std;

int main(){
	int aux;
	int nfriends, hfence, solve = 0;

	cin >> nfriends >> hfence;

	for(int i = 0; i < nfriends; i++){
		cin >> aux;

		aux <= hfence? solve++ : solve += 2;
	}

	cout << solve << endl;

	return 0;
}