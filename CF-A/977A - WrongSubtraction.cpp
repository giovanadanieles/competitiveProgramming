#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int number, times;
	cin >> number >> times;

	for(int i = 0; i < times; i++){
		if(number % 10 == 0) number /= 10;
		else number--;
	}

	cout << number << endl;

	return 0;
}