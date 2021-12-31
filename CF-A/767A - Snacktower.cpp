#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int totalSnacks, curSnack, aux;
	priority_queue<int> snacks;

	cin >> totalSnacks;

	curSnack = totalSnacks;

	for(int i = 0; i < totalSnacks; i++){
		cin >> aux;

		snacks.push(aux);

		if(aux == curSnack){
			while(snacks.top() == curSnack){
				cout << snacks.top() << " ";

				snacks.pop();

				curSnack--;
			}
			cout << endl;
		}
		else cout << endl;
	}


	return 0;
}