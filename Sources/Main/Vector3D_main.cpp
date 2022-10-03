#include "Vector3D.hpp"

int main()
{
	Vector3D vec1(1, 2, 3);
	vec1.x = 3;
	Vector3D vec2(4, 5, 6);
	vec1 = vec2 + vec2;
	vec2 = vec2 - vec1;
	vec1 = vec1 * 3;
	vec1 = vec2 * vec2;
	vec1.getNormalized();
	std::cout << vec1 << std::endl;
	return 0;
}