#include "Complex_Private.h"
#include "Pair.h"



Complex_Private::Complex_Private()
	: Pair(0, 0)
{}
Complex_Private::Complex_Private(double a, double b)
	: Pair(a, b)
{}

Complex_Private::Complex_Private(const Pair& m)
	: Pair(m.get_a(), m.get_b())
{}


Complex_Private& Complex_Private:: operator ++()
{
	this->set_a(this->get_a() + 1);
	return *this;
}
Complex_Private& Complex_Private:: operator --()
{
	this->set_a(this->get_a() - 1);
	return *this;
}
Complex_Private Complex_Private:: operator ++(int)
{
	Complex_Private p(*this);
	this->set_a(this->get_a() + 1);
	return p;
}
Complex_Private Complex_Private:: operator --(int)
{
	Complex_Private p(*this);
	this->set_a(this->get_a() - 1);
	return p;
}

ostream& operator << (ostream& out, const Complex_Private& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Complex_Private& m)
{
	int a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	cout << endl;
	m.set_a(a);
	m.set_b(b);
	return in;
}

Complex_Private::operator string() const
{
	stringstream ss;
	ss;
	ss << " a = " << get_a() << "; " << "b = " << get_b() << endl;
	return ss.str();
}

Complex_Private operator - (Complex_Private l, Complex_Private r)
{
	Pair h(l.get_a() - r.get_a(), l.get_b() - r.get_b());
	return h;
}

Complex_Private operator + (Complex_Private l, Complex_Private r)
{

	Pair h(l.get_a() + r.get_a(), l.get_b() + r.get_b());
	return h;
}

Complex_Private operator * (Complex_Private l, Complex_Private r)
{
	Pair h(l.get_a() * r.get_a(), l.get_b() * r.get_b());
	return h;
}