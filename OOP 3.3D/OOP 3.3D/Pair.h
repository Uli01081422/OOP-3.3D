#pragma once
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

class Pair
{
private:
	double a;
	double b;

public:

	Pair();
	Pair(double a, double b);

	Pair(const Pair&);
	~Pair();

	int get_a() const { return a; }
	int get_b() const { return b; }

	void set_a(int a) { this->a = a; }
	void set_b(int b) { this->b = b; }



	Pair& operator = (const Pair&);
	operator string() const;
	

	friend Pair operator + (const Pair& l, const Pair& r);
};
