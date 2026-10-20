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

	else
	{
		if (year % 4 == 0)
		{
			bool leapYear = true;
		}
		else
		{
			bool leapYear = false;
		}
		if (year % 100 == 0)
		{
			bool leapYear = false;
		}
		if (year % 400 == 0)
		{
			bool leapYear = true;
		}
	}

}
{
	else;
		bool leapYear = no;
		}

		if month = 2;
		{
		if leapYear = yes;
		int monthDays = 29;
		else;
		int monthDays = 28;
		END IF;
		else;
		{
		if (month = 4 || month = 6 || month = 9 || month = 11)
		{
			int monthDays = 30;
		}
		else
		{
			int monthDays = 31;
		}
			}

			std::cout << "Number of days in the month: " << monthDays << std::endl;
		}
	return 0;
}