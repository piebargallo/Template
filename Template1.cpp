// C++ program to demonstrate the metaprogramming templates
#include <iostream>
using namespace std;

// Def of template, with enum to compile in run time
template<int n> struct funStruct
{
	enum { val = 2*funStruct<n-1>::val }; // Use recursion for 2^n
};

// Def of template, default iniciatializacion of val, use 2^0=1
template<> struct funStruct<0>
{
	enum { val = 1 };
};

// Driver code
int main()
{
	// Output 2^3, is 8
	cout << funStruct<3>::val;
	return 0;
} // End driver