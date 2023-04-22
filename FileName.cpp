#include <iostream>
#include <string>
using namespace std;

struct Container
{
    Container(string Name,float x,float y,float z):
		Name(Name),x(x),y(y),z(z)
	{
		cout << Name << endl << "(" << x << "," << y << "," << z << ")" << endl;
	
	}

	string Name;

	float x, y, z;
};

int main()
{
	Container containerNo1 = { "Rex",65.5,3.7,56.57 };
    
	Container* PtrToCont = &containerNo1;

	cout << (*PtrToCont).Name << endl;//使用解引用符号输出指针

	cout << PtrToCont->Name << endl;//语法糖用法
	cout << PtrToCont->x << endl;
	cout << PtrToCont->y << endl;
	cout << PtrToCont->z << endl;

	Container containerNo2("Alex", 86.569, -45.2, 395.f);
}