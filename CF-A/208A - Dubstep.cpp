#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int left, right;
	bool flag = false;
	string dubstep, sep = "WUB", aux;

	cin >> dubstep;

	left = 0, right = dubstep.find(sep);
	while(right != -1){
		aux = dubstep.substr(left, right - left);

		if(aux.size() != 0){
			if(flag) cout << " ";
			cout << aux;

			flag = true;
		}

		left = right + sep.size();
		right = dubstep.find(sep, left);
	}

	aux = dubstep.substr(left, right - left);
	if(aux.size() != 0){
		if(flag) cout << " ";
		cout << aux;
	}

	cout << endl;

	return 0;
}