#include <bits/stdc++.h>
using namespace std;

bool isLeap(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	else return false;
}

int main(int argc, char* const argv[]){
	int measures, day, month, year, consump, totalConsump, totalDays;
	int day_, month_, year_, consump_;

	while(cin >> measures && measures != 0){
		cin >> day >> month >> year >> consump;

		totalDays = 0, totalConsump = 0;

		for(int i = 1; i < measures; i++){
			cin >> day_ >> month_ >> year_ >> consump_;

			if(year == year_){
				if(month == month_){
					if(day_ == day + 1){
						totalConsump += consump_ - consump;
						totalDays++;
					}
				}
				else if(month_ == month + 1){
					if(((month < 8 && month % 2 == 0 && day == 30)  ||
					   (month > 8 && month % 2 == 1 && day == 30)   ||
					   (month < 8 && month % 2 == 1 && day == 31)   ||
					   (month >= 8 && month % 2 == 0 && day == 31)  ||
					   (isLeap(year) && month == 2 && day == 29)    ||
					   (!isLeap(year) && month == 2 && day == 28)) && day_ == 1){
						totalConsump += consump_ - consump;
						totalDays++;
					}
				}
			}
			else if(day == 31 && month == 12 && day_ == 1 && month_ == 1 && year_ == year + 1){
				totalConsump += consump_ - consump;
				totalDays++;
			}

			day = day_, month = month_, year = year_, consump = consump_;
		}

		cout << totalDays << " " << totalConsump << endl;
	}

	return 0;
}