#include "HasPtr.h"

CHasPtr& CHasPtr::operator=(const CHasPtr& CHp)
{
	++*CHp.m_Count;
	if (--*m_Count == 0)
	{
		delete m_Count;
		delete m_Str;
	}
	m_Str = new std::string(*CHp.m_Str);
	m_Count = CHp.m_Count;
	return *this;
}

CHasPtr::~CHasPtr()
{
	--*m_Count;
	if (m_Count == 0)
	{
		delete m_Count;
		delete m_Str;
	}
}