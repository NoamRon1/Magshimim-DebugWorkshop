#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area(bool has_depth) const
{
	if (has_depth)
	{
		throw std::exception("3D triangle is not implemented yet!");
	}

	return float(0.5 * _base * _height);
}

float Triangle::get_area() const { // will override get_area of shape class
	return float(0.5 * _base * _height);
}
