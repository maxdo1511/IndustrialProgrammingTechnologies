#include <iostream>
#include <cmath>

#include "Circle.h"

using namespace std;

namespace Figure {

	Circle::Circle(float r, float x, float y) {
		this->radius = r;
		this->x_center = x;
		this->y_center = y;
	}

	Circle::~Circle() {
		std::cout << "Óäàë¸í!" << std::endl;
	}

	void Circle::set_circle(float r, float x, float y) {
		this->radius = r;
		this->x_center = x;
		this->y_center = y;
	}

	float Circle::square() {
		return Circle::PI_F * (radius * radius);
	}

	bool Circle::triangle_around(float a, float b, float c)
	{
		float p = (a + b + c) / 2;
		float S = sqrt(p * (p - a) * (p - b) * (p - c));
		float R = a * b * c / (4 * S);
		return radius == R;
	}

	bool Circle::triangle_in(float a, float b, float c)
	{
		float p = (a + b + c) / 2;
		float S = sqrt(p * (p - a) * (p - b) * (p - c));
		float r = S / r;
		return radius == r;
	}

	bool Circle::check_circle(float r, float x_cntr, float y_cntr)
	{
		float len = sqrt((x_center - x_cntr) * (x_center - x_cntr) + (y_center - y_cntr) * (y_center - y_cntr));
		return len <= r + radius;
	}


}