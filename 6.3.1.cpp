#include <iostream>

using namespace std;

class Drawing
{
public:
	virtual void Draw()
	{
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				cout << " ";
			}
			else if (i == 1)
			{
				cout << "/";
			}
			else if (i == 2)
			{
				cout << "\\";
			}
			else
			{
				cout << " " << endl;
			}

		}
	};
};
class Line : public Drawing
{
	void Draw() override
	{
		Drawing::Draw();
		for (int i = 0; i < 4; i++)
		{
			if (i == 0 || i == 1)
			{
				cout << "/";
			}
			else if (i == 2)
			{
				cout << "\\";
			}
			else
			{
				cout << "\\" << endl;
			}
		}
	}
};
class Star : public Drawing
{
	void Draw() override
	{
		Drawing::Draw();
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				cout << "/";
			}
			else if (i == 1 || i == 2)
			{
				cout << "*";
			}
			else
			{
				cout << "\\" << endl;
			}
		}
	}
};
class Plus : public Drawing
{
	void Draw() override
	{
		Drawing::Draw();
		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				cout << "/";
			}
			else if (i == 1 || i == 2)
			{
				cout << "+";
			}
			else
			{
				cout << "\\" << endl;
			}
		}
	}
};



int main()
{
	Drawing* line = new Line();
	line->Draw();
	Drawing* star = new Star();
	star->Draw();
	Drawing* plus = new Plus();
	plus->Draw();


	return 0;
}