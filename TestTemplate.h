#pragma once
#include "Header.h"


template <class T1>
TestTemplate<T1>::TestTemplate(T1 object)
{
		this->object = object;
}

template<class T1>
void TestTemplate<T1>::SizeOfData()
{
		cout << sizeof(object) << friend;
}
