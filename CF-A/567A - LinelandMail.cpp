#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int nCities, aux;
	vector<int> cities;

	cin >> nCities;

	for(int i = 0; i < nCities; i++){
		cin >> aux;
		cities.push_back(aux);
	}

	for(int i = 0; i < nCities; i++){
		if(i == 0) cout << cities[1] - cities[0] << " " << cities[nCities - 1] - cities[0] << endl;
		else if(i == nCities - 1) cout << cities[nCities - 1] - cities[nCities - 2] << " " <<
										  cities[nCities - 1] - cities[0] << endl;
		else{
			cout << min(cities[i] - cities[i - 1], cities[i + 1] - cities[i]) << " " << 
					max(cities[i] - cities[0], cities[nCities - 1] - cities[i]) <<
			        endl;
		}
	}

	return 0;
}