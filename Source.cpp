#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

int a(int b) 
{
	assert(b);
	return b;
}

int main() 
{
	cout << a(5) << endl;
	cout << a(0) << endl;
	cout << a(4) << endl;

	return 0;
}