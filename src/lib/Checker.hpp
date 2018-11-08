#ifndef CHECKER
#define CHECKER

#include <string>
#include <iostream>

namespace factory{
class Checker{
private:
	std::string m_name;

public:
	Checker(std::string name): m_name(name){;};
	virtual ~Checker() = 0;

	virtual std::string isOverflow() = 0;
	virtual std::string isDivByZero();
	std::string& getName() { return m_name; };
};
}

#endif