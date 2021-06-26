// Lab 4: Dynamic Memory Part2
// Name: Kirandeep Kaur
// Student Number: 200447067

#ifndef WEATHER_H_
#define WEATHER_H_
#define MAX_DATE 7
class Weather
{
	char date[MAX_DATE + 1];
	double high;
	double low;

public:
	void setData(const char*, double, double);

	void display() const;

	double getLow() const;

	const char* getDate() const;
};
#endif