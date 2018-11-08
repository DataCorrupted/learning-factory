# learning-factory

This is a repo I toyed to learn factory method in C++.

The code is not difficult, yet I spend a day on Makefile :(

## File structure
	bin/ 	binary files are kept here. Including an executable and a dynamic library.
	src/ 	main.cpp and a Makefile is here. Makefile is a recursive one, there is another one in lib.
	src/lib	A simple factory containing two checkers.

## Takeaways

### C++
1. Pure virtual destructor need to be defined too. Or they become undefined reference when the child's destructor is called. Refer [here](https://www.geeksforgeeks.org/pure-virtual-destructor-c/)
2. Template function need to be implemented in header file. Refer [here](https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file)
3. Do not define static variable in head file, or they become re-definition.
4. Anonymous namespace acts as if there is no namespace, but it prevents name sharing between files.
5. (Pure) virtual functions need to be re-declared in child class. Or there will be an "Internal linkage but it's not defined." warning(, and future error).

### Makefile
1. Recursive Makefile is possible.
2. Add '@' before a command to mute it from being displayed in terminal, useful when having "echo"s
3. In Makefile string using single quote(') and double dollar mark($$) to write a dollar($) and prevents it from been executed.

### Dynamic library
1. Path to a destined dynamic library should be added to LD_LIBRARY_PATH before it can be found by a binary executable.

## Conclusion

I like Java. (