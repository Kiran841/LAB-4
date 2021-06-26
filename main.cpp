// Lab 4: Dynamic Memory PArt2
// Name: Kirandeep Kaur
// Student Number: 200447067
/////////////////////////////////////////////////////

#include <iostream>
#include "Weather.h"
using namespace std;

double findLow(const char*, const Weather*, int);

int main()
{
	int i; // loop counter
	int n; // number of objects in Weather array

	// declare a pointer named weatherArray of type Weather here
	Weather* weatherArray = nullptr;


	cout << "Weather Data" << endl
		<< "=====================" << endl
		<< "Days of Weather: ";
	cin >> n;
	cin.ignore();

	// allocate dynamic memory for weatherArray here
	weatherArray = new Weather[n];

	for (i = 0; i < n; i++)
	{
		char dateDescription[7];
		double high;
		double low;

		// add code to accept the user input for the weather array and set the data
		// for each object of weatherArray
	   //[Hint] get() and ignore()
		cout << "Description of date:";
		cin.get(dateDescription, 7, '\n');
		cin.ignore();

		cout << "Higher value:";
		cin >> high;
		cin.ignore();

		cout << "Lower Value:";
		cin >> low;
		cin.ignore();

		weatherArray[i].setData(dateDescription, low, high);
	}

	cout << endl
		<< "Weather report:" << endl
		<< "Date high low" << endl
		<< "======================" << endl;

	for (i = 0; i < n; i++)
	{
		weatherArray[i].display();
	}

	char query[7];

	cout << endl << "Enter the date you are looking for: ";
	
	cin.getline(query, 7, '\n');

	double low = findLow(query, weatherArray, n);

	cout << "Low temperature: " << low << endl;


	// deallocated dynamic memory here

	delete[] weatherArray;

	weatherArray = nullptr;


	return 0;

	double findLow(const char* date, const Weather * data,
		int dataSize);

}


// added a findLow global function implementation here
double findLow(const char* date, const Weather* data, int dataSize)
{
	for (int i = 0; i < dataSize; i++)
	{
		Weather wa1 = data[i];

		//I am using the strncmp func to get value with comparison.
		if (strncmp(wa1.getDate(), date, strlen(date)) == 0)
		{
			return wa1.getLow();
		}
		else {

			return 0.0;
		}
	}

}
