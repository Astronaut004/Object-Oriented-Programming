
#include <iostream>
using namespace std;

class Abs {
private:
	int a, b;

public:

	void setter(int x, int y)
	{
		a = x;
		b = y;
	}

	void getter()
	{
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
};

int main()
{
	Abs obj;
	obj.setter(10, 20);
	obj.getter();
	return 0;
}
