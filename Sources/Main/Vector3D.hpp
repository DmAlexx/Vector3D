#pragma once
#include <iostream>

class Vector3D
{
private:

public:
	float x = 0;
	float y = 0;
	float z = 0;

public: 
	Vector3D(float x_coord, float y_coord, float z_coord);
	Vector3D();
	Vector3D operator+(const Vector3D& right) const;
	Vector3D operator-(const Vector3D& right) const;
	Vector3D operator*(const Vector3D& right) const;
	Vector3D operator*(float value) const;
	Vector3D& operator+=(const Vector3D& right);
	Vector3D& operator-=(const Vector3D& right);
	Vector3D& operator*=(const Vector3D& right);
	Vector3D& operator*=(float value);
	Vector3D& operator=(const Vector3D& right); 
	friend std::ostream& operator<<(std::ostream& cout, const Vector3D& right);
	float length() const;
	Vector3D getNormalized();
};
