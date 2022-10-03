#include "Vector3D.hpp"

Vector3D::Vector3D(float x_coord, float y_coord, float z_coord)
	: x(x_coord)
	, y(y_coord)
	, z(z_coord)
{
}

Vector3D::Vector3D()
{
}

Vector3D Vector3D::operator+(const Vector3D& right) const
{
	return Vector3D(x + right.x, y + right.y, z + right.z);
}

Vector3D Vector3D::operator-(const Vector3D& right) const
{
	return Vector3D(x - right.x, y - right.y, z - right.z);
}

Vector3D Vector3D::operator*(const Vector3D& right) const
{
	return Vector3D(x * right.x, y * right.y, z * right.z);
}

Vector3D Vector3D::operator*(float value) const
{
	return Vector3D(x * value, y * value, z * value);
}

float Vector3D::length() const
{
	return std::sqrt(x * x + y * y + z * z);
}

Vector3D Vector3D::getNormalized()
{
	auto len = length();
	return Vector3D(x / len, y / len, z / len);
}

Vector3D& Vector3D::operator+=(const Vector3D& right)
{
	x += right.x;
	y += right.y;
	z += right.z;
	return *this;
}

Vector3D& Vector3D::operator-=(const Vector3D& right)
{
	x -= right.x;
	y -= right.y;
	z -= right.z;
	return *this;
}

Vector3D& Vector3D::operator*=(const Vector3D& right)
{
	x *= right.x;
	y *= right.y;
	z *= right.z;
	return *this;
}

Vector3D& Vector3D::operator*=(float value)
{
	x *= value;
	y *= value;
	z *= value;
	return *this;
}

Vector3D& Vector3D::operator=(const Vector3D& right)
{
	x = right.x;
	y = right.y;
	z = right.z;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Vector3D& right)
{
	out << "x = " << right.x << "; y = " << right.y << "; z = " << right.z;
	return out;
}
