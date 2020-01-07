#include <bits/stdc++.h>
using namespace std;

int main(){
	int np; cin >> np;
	int m[np], solve = 1;

	for(int i = 0; i < np; i++){
		cin >> m[i];
	}

	for(int i = 0; i < np && i+1 < np; i++){
		if(m[i] != m[i+1]) solve++;
	}

	cout << solve << endl;

	return 0;
}