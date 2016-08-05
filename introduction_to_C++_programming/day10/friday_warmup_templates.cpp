// File: friday.cpp
//
//  Test code for template functions getMax( ) and swapItems()

#include <iostream>
using namespace std;

// getMax
//   template function that returns the larger of
//   its two arguments.  Must support operator>



// swapItems
//  template function that swaps its two arguments
//  in place.  Must support default constructor and
//  assignment operator




int main()
{
    // test functions with integers
    int a = 42, b = 77;
    cout << "Initial values: a = " << a << ", b = " << b << endl;
    int maxInt = max(a, b);
    cout << "The max of " << a << " and " << b << " is " << maxInt << endl;

    swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // now test with strings
    string s1 = "Hi Mom!";
    string s2 = "Hello World";
    cout << "Initial values: s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"\n";
    string maxString = getMax(s1, s2);
    cout << "The max of: \"" << s1 << " and \"" << s2 << " is \"" << maxString << "\"\n";

    swap(s1, s2);
    cout << "After swapping: s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"\n";

    return 0;
}
