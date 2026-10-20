// Chantell Jenkins
// October 19, 2026
// Days in a Month Calculator

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Days in a Month Calculator\n";
	int month;
	std::cout << "Enter a month number from 1 - 12: ";
	std::cin >> month;
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (month < 1 || month > 12)
	{
		std::cout << "Invalid - please input a number 1 - 12\n";
	}

	ELSE
		IF year is divisible by 4
		int leapYear = yes
		IF year is divisible by 100
		int leapYear = no
		IF year is divisible by 400
		int leapYear = yes
		END IF

		END IF

		ELSE
		int leapYear = no
		END IF

		IF month = 2
		IF leapYear = yes
		int monthDays = 29
		ELSE
		int monthDays = 28
		END IF
		ELSE
		IF month = 4 OR month = 6 OR month = 9 OR month = 11
		int monthDays = 30

		ELSE
		int monthDays = 31
		END IF
		END IF

		DISPLAY monthDays
		END IF
	return 0;
}