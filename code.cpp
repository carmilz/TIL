//p568-Part04-Chapter14-ClassTemplateSpecialization.cpp
#include <iostream>

template <typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y) {}
	void ShowPosition() const { std::cout << '[' << xpos << ", " << ypos << ']' << std::endl; }
};

//다음 시간에..

int main()
{
	//다음 시간에..

	system("pause");
}
