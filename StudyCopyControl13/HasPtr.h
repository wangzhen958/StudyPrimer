#pragma once
#include <string>

class CHasPtr
{
public:
	CHasPtr(std::string str) :m_Count(new size_t(1)), m_Str(new std::string(str)) {};
	//CHasPtr(const CHasPtr &HPt) :m_Str(HPt.m_Str), m_Count(HPt.m_Count) { ++*m_Count; };
	CHasPtr(const CHasPtr &HPt) :m_Str(new std::string(*HPt.m_Str)),m_Count(HPt.m_Count) { ++*m_Count; };
	CHasPtr& operator=(const CHasPtr& CHp);
	~CHasPtr();

	std::string *m_Str;
	std::size_t *m_Count;

private:
};
