#pragma once
#include <iostream>

class Vector3
{
private:

public:
	float x = 0;
	float y = 0;
	float z = 0;

public: 
	Vector3(float x_coord, float y_coord, float z_coord);
	Vector3();
	~Vector3() = default;
	Vector3 operator+(const Vector3& right) const;
	Vector3 operator-(const Vector3& right) const;
	Vector3 operator*(const Vector3& right) const;
	Vector3 operator*(float value) const;
	Vector3& operator+=(const Vector3& right);
	Vector3& operator-=(const Vector3& right);
	Vector3& operator*=(const Vector3& right);
	Vector3& operator*=(float value);
	Vector3& operator=(const Vector3& right); 
	friend std::ostream& operator<<(std::ostream& cout, const Vector3& right);
	float length() const;
	Vector3 getNormalized();
};
