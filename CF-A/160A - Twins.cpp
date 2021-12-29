#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nCoins, aux, total = 0, ans = 0;
	vector<int> coins;

	cin >> nCoins;

	for(int i = 0; i < nCoins; i++){
		cin >> aux;

		total += aux;

		coins.push_back(aux);
	}

	sort(coins.begin(), coins.end(), greater<int>());

	unsigned int i = 0;
	for(; i < coins.size() && ans <= total - ans; i++){
		ans += coins[i];
	}

	cout << i << endl;

	return 0;
}