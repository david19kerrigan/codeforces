make:
	g++ p.cpp ; cat test | ./a.out
res:
	rm p.cpp ; cp temp.cpp p.cpp
