// Chantell Jenkins
// October 19, 2026
// Days in a Month Calculator

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Days in a Month Calculator\n";
	int monthDays;
	bool leapYear = false;

	int month;
	std::cout << "Enter a month number from 1 - 12: ";
	std::cin >> month;
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (month < 1 || month > 12)
	{
		std::cout << "Invalid - please input a number 1 - 12" << std::endl;
	}
	else
	{
		if (year % 4 == 0)
		{
			leapYear = true;
		}
		if (year % 100 == 0)
		{
			leapYear = false;
		}
		if (year % 400 == 0)
		{
			leapYear = true;
		}

		if (month == 2)
		{
			if (leapYear == true)
			{
			 monthDays = 29;
			}
			else
			{
			 monthDays = 28;
			}
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			monthDays = 30;
		}
		else
		{
			monthDays = 31;
		}

			std::cout << "Number of days in the month: " << monthDays << std::endl;
		}
	return 0;
}