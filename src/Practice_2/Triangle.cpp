#include <iostream>
#include <cmath>

#include "Triangle.h"

using namespace std;

namespace Figure {

	Triangle::Triangle(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}

	Triangle::~Triangle() {
		std::cout << "Óäàë¸í!" << std::endl;
	}

	bool Triangle::exst_tr() {
		return ((a + b > c) && (b + c > a) && (a + c > b));
	}

	void Triangle::set(double a1, double b1, double c1) {
		this->a = a1;
		this->b = b1;
		this->c = c1;
	}

	void Triangle::show() {
		std::cout << "Triangle: " << a << " " << b << " " << c << std::endl;
	}

	double Triangle::perimetr() {
		return a + b + c;
	}

	double Triangle::square() {
		double p = perimetr() / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
}