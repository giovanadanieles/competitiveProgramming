#include <bits/stdc++.h>
using namespace std;

int digit(int it, int number){
	int dig;

	for(int i = 0; i < it; i++){
		dig = number % 10;

		number /= 10; 
	}

	return dig;
}

int main(int argc, char* const argv[]){
	int year;
	cin >> year;

	do{
		year++;
	}
	while(digit(1, year) == digit(2, year) || digit(1, year) == digit(2, year) || 
		  digit(1, year) == digit(3, year) || digit(1, year) == digit(4, year) ||
		  digit(2, year) == digit(3, year) || digit(2, year) == digit(4, year) ||
		  digit(3, year) == digit(4, year));

	cout << year << endl;

	return 0;
}