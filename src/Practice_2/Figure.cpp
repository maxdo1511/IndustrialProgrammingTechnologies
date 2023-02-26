#include "Figure.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace Figure {

	Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
	{
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->x4 = x4;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
		this->y4 = y4;
		this->P = getP();
		this->S = getS();
	}
	Figure::~Figure()
	{
	}
	void Figure::show()
	{
		std::cout << "Sides x: " << x1 << " " << x2 << " " << x3 << " " << x4 << std::endl;
		std::cout << "Sides y: " << y1 << " " << y2 << " " << y3 << " " << y4 << std::endl;
		std::cout << "Perimetr: " << P << " Square: " << S << std::endl;
	}
	bool Figure::is_prug()
	{
		return ((angle(x1, x2, x1, x4, y1, y2, y1, y4) == 90) && (angle(x2, x1, x2, x3, y2, y1, y2, y3) == 90) && (angle(x3, x2, x3, x4, y3, y2, y3, y4) == 90) && (angle(x4, x1, x4, x3, y4, y1, y4, y3) == 90));
	}
	bool Figure::is_square() {
		return ((angle(x1, x2, x1, x4, y1, y2, y1, y4) == 90) && (angle(x2, x1, x2, x3, y2, y1, y2, y3) == 90) && (angle(x3, x2, x3, x4, y3, y2, y3, y4) == 90) && ((angle(x4, x1, x4, x3, y4, y1, y4, y3) == 90)) && (len(x1, x2, y1, y2) == len(x2, x3, y2, y3)) && (len(x3, x4, y3, y4) == len(x1, x2, y1, y2)) && (len(x2, x3, y2, y3) == len(x3, x4, y3, y4)));
	}

	bool Figure::is_romb() {
		return ((len(x1, x2, y1, y2) == len(x2, x3, y2, y3)) && (len(x3, x4, y3, y4) == len(x1, x2, y1, y2)) && (len(x2, x3, y2, y3) == len(x3, x4, y3, y4)));
	}

	bool Figure::is_in_circle() {

		return (len(x1, x2, y1, y2) + len(x3, x4, y3, y4) == len(x2, x3, y2, y3) + len(x4, x1, y4, y1));
	}

	bool Figure::is_out_circle() {
		return (angle(x1, x2, x1, x4, y1, y2, y1, y4) + angle(x3, x2, x3, x2, y3, y2, y3, y4) == angle(x2, x1, x2, x3, y2, y1, y2, y3) + angle(x4, x1, x4, x3, y4, y1, y4, y3));
	}

	float Figure::getP()
	{
		float s1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		float s2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
		float s3 = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
		float s4 = sqrt((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));
		return s1 + s2 + s3 + s4;
	}

	float Figure::getS()
	{
		return abs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x1 * y4) / 2;
	}

	float Figure::angle(float x11, float x12, float x21, float x22, float y11, float y12, float y21, float y22)
	{
		float x1 = x11 - x21;
		float y1 = y11 - y21;
		float x2 = x12 - x22;
		float y2 = y12 - y22;
		return ((180 / 3.14) * acos((abs(x1 * x2 + y1 * y2)) / (sqrt(x1 * x1 + y1 * y1) * sqrt(x2 * x2 + y2 * y2))));
	}

	float Figure::len(float x1l, float x2l, float y1l, float y2l)
	{
		return (sqrt((x2l - x1l) * (x2l - x1l) + (y2l - y1l) * (y2l - y1l)));
	}
}