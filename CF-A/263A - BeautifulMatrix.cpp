#include <bits/stdc++.h>
using namespace std;

int main(){
	int auxi, auxj, m, solve = 0;

	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			cin >> m;

			if(m == 1){
				auxi = i; auxj = j;
			} 
		}
	}

	solve = abs(auxi - 3) + abs(auxj - 3);

	cout << solve << endl; 

	return 0;
}