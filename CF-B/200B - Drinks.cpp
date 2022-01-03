#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nDrinks, aux;
	double ans;

	cin >> nDrinks;

	for(int i = 0; i < nDrinks; i++){
		cin >> aux;

		ans += aux;
	}

	cout << fixed << setprecision(15) << ans / (double) nDrinks << endl;

	return 0;
}