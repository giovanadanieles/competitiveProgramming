#include <bits/stdc++.h>
using namespace std;

int main(){
	int e; cin >> e;
	int v[e], solve = 0, ac = 0, flag;

	for(int i = 0; i < e; i++){
		cin >> v[i];
	}

	for(int i = 0; i < e; i++){
		if(ac == 0) flag = 0;

		if(v[i] > 0){ 
			ac+= v[i];
			flag = 1;
		}
		else if(v[i] < 0 && flag == 0) solve++;
		else ac+= v[i];
	}

	cout << solve << endl;

	return 0;
}