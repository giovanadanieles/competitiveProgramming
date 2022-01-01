#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	bool flag = false;
	int nPeople, aux;

	cin >> nPeople;

	for(int i = 0; i < nPeople; i++){
		cin >> aux;

		if(aux == 1) flag = true;
	}

	flag == true? cout << "HARD" << endl : cout << "EASY" << endl;

	return 0;
}