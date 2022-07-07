#include "Vector3D.hpp"
#include <math.h>

Vector3::Vector3(float x_coord, float y_coord, float z_coord)
	: x(x_coord)
	, y(y_coord)
	, z(z_coord)
{
}

Vector3::Vector3()
{
}

Vector3 Vector3::operator+(const Vector3& right) const
{
	return Vector3(x + right.x, y + right.y, z + right.z);
}

Vector3 Vector3::operator-(const Vector3& right) const
{
	return Vector3(x - right.x, y - right.y, z - right.z);
}

Vector3 Vector3::operator*(const Vector3& right) const
{
	return Vector3(x * right.x, y * right.y, z * right.z);
}

Vector3 Vector3::operator*(float value) const
{
	return Vector3(x * value, y * value, z * value);
}

float Vector3::length() const
{
	return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::getNormalized()
{
	auto len = length();
	return Vector3(x / len, y / len, z / len);
}

Vector3& Vector3::operator+=(const Vector3& right)
{
	x += right.x;
	y += right.y;
	z += right.z;
	return *this;
}

Vector3& Vector3::operator-=(const Vector3& right)
{
	x -= right.x;
	y -= right.y;
	z -= right.z;
	return *this;
}

Vector3& Vector3::operator*=(const Vector3& right)
{
	x *= right.x;
	y *= right.y;
	z *= right.z;
	return *this;
}

Vector3& Vector3::operator*=(float value)
{
	x *= value;
	y *= value;
	z *= value;
	return *this;
}

Vector3& Vector3::operator=(const Vector3& right)
{
	x = right.x;
	y = right.y;
	z = right.z;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Vector3& right)
{
	out << "addr = " << &right << "; x = " << right.x << "; y = " << right.y << "; z = " << right.z;
	return out;
}
