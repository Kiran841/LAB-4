// Lab 4: Dynamic Memory Part2
// Name: Kirandeep Kaur
// Student Number: 200447067

#define _CTR_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "Weather.h"
using namespace std;
void Weather::setData(const char* d, double lo, double hi)
{
	high = hi;
	low = lo;
	strncpy_s(date, d, 6);
}

void Weather::display() const
{
	cout << setw(10) << setfill('_') << left << date;
	cout.unsetf(ios::left);
	cout << fixed << setprecision(1) << setw(6) << high << setw(6) << low << endl;
}

double Weather::getLow() const
{
	return low;
}

const char* Weather::getDate() const
{
	return date;
}