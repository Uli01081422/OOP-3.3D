#pragma once
#include "Pair.h"

using namespace std;

class Complex_Private : private Pair
{
private:
	Pair pair;

public:

	Complex_Private();
	Complex_Private(double, double);
	Complex_Private(const Pair&);
	~Complex_Private() {};


	using Pair::get_a;
	using Pair::get_b;

	using Pair::set_a;
	using Pair::set_b;


	operator string () const;

	friend Complex_Private operator + (Complex_Private l, Complex_Private r);
	friend Complex_Private operator * (Complex_Private l, Complex_Private r);
	friend Complex_Private operator - (Complex_Private l, Complex_Private r);


	Complex_Private& operator ++();
	Complex_Private& operator --();
	Complex_Private operator ++(int);
	Complex_Private operator --(int);

	friend ostream& operator << (ostream&, const Complex_Private&);
	friend istream& operator >> (istream&, Complex_Private&);
};
