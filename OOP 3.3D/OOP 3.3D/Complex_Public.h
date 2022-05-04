#pragma once
#include "Pair.h"

using namespace std;

class Complex_Public : public Pair
{
private:
	Pair pair;

public:

	Complex_Public();
	Complex_Public(double, double);
	Complex_Public(const Pair&);

	friend ostream& operator << (ostream& out, const Complex_Public& s);
	friend istream& operator >> (istream& in, Complex_Public& s);
	operator string () const;

	friend Complex_Public operator + (Complex_Public k1, Complex_Public k2);
	friend Complex_Public operator * (Complex_Public k1, Complex_Public k2);
	friend Complex_Public operator - (Complex_Public k1, Complex_Public k2);

	Complex_Public& operator ++ ();
	Complex_Public& operator -- ();
	Complex_Public operator ++ (int);
	Complex_Public operator -- (int);
};


