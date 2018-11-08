#include "CalcChecker.hpp"

namespace factory{

REGISTER_CHECKER(CalcChecker, "CalcChecker");

std::string
CalcChecker::isOverflow(){
	return "CalcChecker::isOverflow";
}

std::string
CalcChecker::genOp(){
	return "CalcChecker::genOp";
}

std::string
CalcChecker::isDivByZero(){
	return "CalcChecker::isDivByZero";
}
}