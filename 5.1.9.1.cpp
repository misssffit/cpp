#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	int height;
	int weight;
	// Your code here
};
void print(Person* person)
{
	cout <<" \n" << person->name << " is " << person->age << " years old " << person->height << " height " << person->weight << " weight " << endl;
}

int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	person.height = 180;
	person.weight = 79;
	cout << "Meet " << person.name;
	print(&person);
	Person person1;
	person1.name = "Makar";
	person1.age = 69;
	person1.height = 300;
	person1.weight = 500;
	cout << "Meet " << person1.name;
	print(&person1);
	return 0;
}