#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int n, sec;
	string queue; 

	cin >> n >> sec;
	cin >> queue;

	for(int i = 0; i < sec; i++){
		for(int j = 0; j < n - 1; j++){
			if(queue[j] == 'B' && queue[j + 1] == 'G'){
				swap(queue[j], queue[j + 1]);
				j++;
			}
		}
	}

	cout << queue << endl;

	return 0;
}
