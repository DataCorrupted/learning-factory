CXX = clang++ -std=c++14
CFLAG = -O3 -g
OBJS =  Checker.o CalcChecker.o CheckerFactory.o FlagChecker.o
all: main.bin clean

libChecker.so:
	cd lib && make

main.bin: main.cpp libChecker.so
	$(CXX) $(CFLAG) -L../bin $< -o $@  -lChecker

.PHONY: clean
clean:
	mv main.bin ../bin 

	@echo "Compilation finished. "
	@echo "Please add the path to your LD_LIBRARY_PATH so the binary can find the dynamic linked library."
	@echo "Simply do the following: "
	@echo
	@echo 'export LD_LIBRARY_PATH=$$(pwd)/bin:$$LD_LIBRARY_PATH'
	@echo
	@echo "and you are good to go."
	@echo
