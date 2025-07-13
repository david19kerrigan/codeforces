CXXFLAGS = -std=c++20 -I. -fcompare-debug-second -g
make:
	g++ p.cpp $(CXXFLAGS) ; cat test | ./a.out
res:
	rm p.cpp ; cp temp.cpp p.cpp
run:
	cat test | ./a.out
com:
	g++ p.cpp $(CXXFLAGS) 
