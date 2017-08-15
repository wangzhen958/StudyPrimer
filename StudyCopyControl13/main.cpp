#include "HasPtr.h"
#include <iostream>

void main() 
{
	CHasPtr p1("one");
	std::cout << "p1:" << *p1.m_Count << " " << *p1.m_Str << " " << std::endl;
	CHasPtr p2(p1);
	std::cout << "p2:" << *p2.m_Count << " " << *p2.m_Str << " " << std::endl;
	CHasPtr p3(p1);
	std::cout << "p3:" << *p3.m_Count << " " << *p3.m_Str << " " << std::endl;

	system("pause");
}