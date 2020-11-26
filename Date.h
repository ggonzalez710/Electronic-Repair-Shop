#pragma once
class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date();
	~Date();

	void setYear(int y);
	int getYear() const;
	void setMonth(int m);
	int getMonth() const;
	void setDay(int d);
	int getDay() const;

	bool isLeapYear();
	char isValidDate();
};

