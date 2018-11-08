#include "FlagChecker.hpp"

namespace factory{

REGISTER_CHECKER(FlagChecker, "FlagChecker");

std::string 
FlagChecker::getFlag(){
	return "FlagChecker::getFlag";
}

std::string
FlagChecker::isOverflow(){
	return "FlagChecker::isOverflow";
}

std::string
FlagChecker::isDivByZero() {
	return Checker::isDivByZero();
}
}