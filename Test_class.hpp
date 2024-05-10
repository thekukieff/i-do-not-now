#ifndef TEST_CLASS_HPP
#define TEST_CLASS_HPP
#include "Test.hpp"
#include <iostream>
#include<string>
using namespace std;
class Test_class
{
public:
	void Print_lol();

private://public имеет доступ к private
	string name = "lol";

};


#endif //!TEST_CLASS_HPP
