#include <iostream>

#include "lib/CheckerFactory.hpp"
#include "lib/Checker.hpp"

using namespace std;

namespace factory{

int main(){
	auto flagChecker = CheckerFactory::getChecker("FlagChecker");
	auto calcChecker = CheckerFactory::getChecker("CalcChecker");

	auto factoryMap = CheckerFactory::getFactoryMap();
	cout << factoryMap.size() << " checkers here!\n";

	// Only these two methods are exposed.
	cout << flagChecker->isDivByZero() << endl;
	cout << flagChecker->isOverflow() << endl;

	cout << calcChecker->isOverflow() << endl;
	cout << calcChecker->isDivByZero() << endl;
	return 0;
}

}

int main(){
	return factory::main();
}
