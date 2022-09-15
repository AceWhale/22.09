#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int d);
	Date(int d, int m);
	Date(int d, int m, int y);
	void Print()const;
	void SetD(int x);
	void SetM(int x);
	void SetY(int x);
	int GetD()const;
	int GetM()const;
	int GetY()const;
	Date operator+(int a);
	Date operator-(int a);
	Date check(Date&);
	//Date& operator+(const Date& a);
	//Date& operator-(const Date& a);
	//Date& operator+=(int a);
	//Date& operator-=(int a);
	//bool operator>(const Date& t);
	//bool operator>=(const Date& t);
	//bool operator<(const Date& t);
	//bool operator<=(const Date& t);
	//bool operator==(const Date& t);
	//bool operator!=(const Date& t);

};