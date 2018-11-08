#ifndef CALC_CHECKER
#define CALC_CHECKER

#include "Checker.hpp"
#include "CheckerFactory.hpp"

namespace factory{
class CalcChecker : public Checker{
public:
	CalcChecker(std::string name):Checker(name){;};
	~CalcChecker(){;};
	std::string genOp();
	std::string isOverflow();
	std::string isDivByZero();
};
}

#endif