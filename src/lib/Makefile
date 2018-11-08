CXX = clang++ -std=c++14
CFLAG = -fPIC -O3 -g

.PHONY: all
all: libChecker.so clean

libChecker.so: Checker.o CalcChecker.o FlagChecker.o
	$(CXX) $(CFLAG) -shared $^ -o $@

Checker.o: Checker.cpp 
	$(CXX) $(CFLAG) -c $^ -o $@


CalcChecker.o: CalcChecker.cpp
	$(CXX) $(CFLAG) -c $^ -o $@

FlagChecker.o: FlagChecker.cpp
	$(CXX) $(CFLAG) -c $^ -o $@

.PHONY: clean
clean:
	mv libChecker.so ../../bin
	rm *.o
