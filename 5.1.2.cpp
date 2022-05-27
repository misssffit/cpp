#include <iostream>
#include <string>
using namespace std;
class Square
{
public:
	Square(double side);
	void set_side(double side);
	double get_side();
	double get_area();
private:
	double side;
	double area;
	// Your code here
};
Square::Square(double side)
{
	this->side = side;
	this->area = side * side;
}
void Square::set_side(double side) {
	if (side < 0) {
		this->side = 0;
		this->area = 0;
	}
	else {
		this->side = side;
		this->area = side * side;
	}
}
double Square::get_side() {
	return side;
}
double Square::get_area() {
	return area;
}
void print(Square* square)
{
	cout << "Square: side=" << square->get_side() << " area=" << square->get_area() << endl;
}
int main()
{
	Square s(4);
	print(&s);
	s.set_side(5);
	print(&s);
	s.set_side(-3);
	print(&s);
		return 0;
}