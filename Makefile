CXXFLAGS = -std=c++14 -I.
make:
	g++ p.cpp $(CXXFLAGS) ; cat test | ./a.out
res:
	rm p.cpp ; cp temp.cpp p.cpp
