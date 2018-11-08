#ifndef FLAG_CHECKER
#define FLAG_CHECKER

#include "Checker.hpp"
#include "CheckerFactory.hpp"

namespace factory{
class FlagChecker : public Checker{
public:
	FlagChecker(std::string name): Checker(name){;};
	~FlagChecker(){;};
	std::string getFlag();
	std::string isOverflow();
	std::string isDivByZero();
};
}

#endif