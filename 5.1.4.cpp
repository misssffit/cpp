#include <iostream>
using namespace std;

class ShopItemOrder
{
public:
	ShopItemOrder();
	~ShopItemOrder();
	void set_name(string name);
	void set_price(double price);
	void set_amount(int amount);
	double total_price();
	string get_name();
	double get_price();
	int get_amount();

private:
	string name;
	double price;
	int amount;
};

ShopItemOrder::ShopItemOrder()
{
}

ShopItemOrder::~ShopItemOrder()
{
}

void ShopItemOrder::set_name(string name) {
	this->name = name;
}
void ShopItemOrder::set_price(double price) {
	this->price = price;
}
void ShopItemOrder::set_amount(int amount) {
	this->amount = amount;
}
string ShopItemOrder::get_name() {
	return name;
}
double ShopItemOrder::get_price() {
	return price;
}
int ShopItemOrder::get_amount() {
	return amount;
}
double ShopItemOrder::total_price() {
	return price * amount;
}
void print(ShopItemOrder* shopitemorder) {
	cout << " your order is : " << shopitemorder->get_amount() << " of " << shopitemorder->get_name() << 
		endl << " price for a sigle item is : " << shopitemorder->get_price() << endl
		<< " the total price is : "<< shopitemorder->total_price() << endl;
}

int main()
{
	ShopItemOrder item;
	item.set_name("cucumber");
	item.set_price(5.6);
	item.set_amount(7);
	print(&item);
}


