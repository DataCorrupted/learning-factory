#ifndef CHECKER_FACTORY
#define CHECKER_FACTORY

#include "Checker.hpp"

#include <map>
#include <functional>
#include <memory>


namespace factory{

typedef std::function<std::unique_ptr<Checker>(std::string)> CheckerConstructor;
typedef std::map<std::string, CheckerConstructor> CheckerFactoryMap;

class CheckerFactory{

public:

public:

	static CheckerFactoryMap& getFactoryMap(){
		static CheckerFactoryMap factoryMap;
		return factoryMap;
	}

public:
	template<class CheckerType>
	static void 
	registerChecker(const std::string checkerName){
		CheckerFactoryMap& factoryMap = getFactoryMap();

	    factoryMap.insert(std::pair<std::string, CheckerConstructor>(
			checkerName, 
			[] (std::string name) { return std::make_unique<CheckerType>(name); }
		) );
	};

	static std::unique_ptr<Checker>
	getChecker(const std::string checkerName){
		CheckerFactoryMap& factoryMap = getFactoryMap();
		return factoryMap.find(checkerName) == factoryMap.end() ?
			nullptr :
		    factoryMap[checkerName](checkerName);
	};
};

#define REGISTER_CHECKER(T, N)                     \
static class Checker ## T ## RegistrationClass {   \
public:                                            \
  Checker ## T ## RegistrationClass(){             \
    CheckerFactory::registerChecker<T>(N);         \
    std::cout << N << " registered!\n" ;           \
  }                                                \
} g_Checker ## T ## RegisterVariable

}

#endif