#pragma once
#include <iostream>

class test
{
private:
	int a;
	int b;
public:
	test(int a, int b): a(a), b(b) {}
	~test() {}
	friend void FuncA();
};

inline void FuncA() {
	test testobj(15, 25);
	std::cout << testobj.a << " " << testobj.b << std::endl;
}