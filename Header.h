#pragma once
#include <iostream>
#include <string>
#include "TestTemplate.h"
using namespace std;

template <class T1>
class TestTemplate
{
public:
	TestTemplate(T1 object);
	void SizeOfData();

private:
	T1 object;
};