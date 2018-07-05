// Complex.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class complex
{
public:
	complex();
	complex(int x,int s);
	void setXandY(int x,int s);
	int getX();
	int getS();
	void display();
	~complex();
	operator double() {
		return s;
	}
	complex operator++();
	complex operator++(int);

private:
	int x;
	int s;
};
complex complex:: operator++() {
	++this->x;
	++this->s;
	return *this;
}
complex complex::operator++(int) {//后自增
	this->x++;
	this->s++;
	return *this;
}
complex::complex()
{

}

complex::complex(int x,int s)
{
	this->x = x;
	this->s = s;
}

complex::~complex()
{

}

void complex::display() {
	cout << "complex=< " << this->s << "+" << this->x << "i" << ">" << endl;
}

void complex::setXandY(int x,int s) {
	this->x = x;
	this->s = s;
}
int complex::getX() {
	return this->x;
}
int complex::getS() {
	return this->s;

}
/*complex operator+(complex &c1, complex &c2) {
	complex c3;
	c3.setXandY(c1.getX()+c2.getX(), c2.getS()+c1.getS());
	return c3;
}
complex operator+(int c1, complex &c2) {//整数不能使用引用，因为从形参接收到的是一个值而不是一个变量
	complex c3;
	c3.setXandY(c1, c2.getS());
	return c3;
}
complex operator+(complex &c2, int c1) {
	complex c3;
	c3.setXandY(c1, c2.getS());
	return c3;
}
void function(int &x) {
	cout << "x=" << x << endl;
}

class Rectangle
{
public:
	Rectangle();
	Rectangle(int init);
	~Rectangle();
	void display();
	friend Rectangle operator +(Rectangle &r1, Rectangle &r2);
	friend istream & operator>>(istream &input, Rectangle &r1);
	friend ostream & operator<<(ostream &input, Rectangle &r1);
private:
	int arr[2][3];
};

Rectangle::Rectangle()
{
}
Rectangle::Rectangle(int init)//init arr data
{
	for(int i=0;i<2;i++)
		for (int j = 0; j < 3; j++) {
			arr[i][j] = init;
			init++;
	}
}
void Rectangle::display() {
	cout << "Array=";
	for (int i = 0; i<2; i++)
		for (int j = 0; j < 3; j++) {
			cout<<this->arr[i][j];
		}
	cout << endl;
}
Rectangle::~Rectangle()
{
}
Rectangle operator +(Rectangle &r1, Rectangle &r2) {
	Rectangle r3;
	for (int i = 0; i<2; i++)
		for (int j = 0; j < 3; j++) {
			r3.arr[i][j] = r1.arr[i][j]+r2.arr[i][j];
		}
		return r3;
}
istream & operator>>(istream &input, Rectangle &r1) {
	for (int i = 0; i<2; i++)
		for (int j = 0; j < 3; j++) {
			input >> r1.arr[i][j];
		}
	return input; 

}
ostream & operator<<(ostream &output, Rectangle &r1)
{
	output << "Array=";
	for (int i = 0; i<2; i++)
		for (int j = 0; j < 3; j++) {
			output << r1.arr[i][j];
		}
	output << endl;
	return output;
}
*/
int main()
{
	/*complex c1(5, 5), c2(6, 6), c3(0,0), c4(0, 0), c5(0, 0);
	c1.display(); c2.display(); c3.display();

	c3 = c1 + c2;
	c3.display();

	c4 = 1 + c2;
	c4.display();

	c5 = c2+1;
	c5.display();/*
	int x = 10;
	function(x);*/

	////////////////////////////////////////////
	/*//矩形数组相加
	Rectangle r1(1), r2(1), r3, r4;
	r1.display(); r2.display();
	r3 = r1 + r2;
	r3.display();
	*/

	////////////////////////////////////////////////
	//重载插入提取运算符
	/*
	cout << r3;
	cin >> r4;
	cout << r4;*/
	////////////////////////////////////////////////
	/*
	complex c6(1.0,1.0);
	double d1 = 10.11;
	d1 = d1 + c6;
	cout << d1 << endl;
	c6.setXandY(d1,d1);
	c6.display();
	*/
	complex c7(10, 10);
	for (int i = 0; i < 10; i++)
	{
		
		cout << ++c7 << endl;
	}
	for (int i = 0; i < 10; i++)
	{

		cout << c7++ << endl;
	}
    return 0;
}

