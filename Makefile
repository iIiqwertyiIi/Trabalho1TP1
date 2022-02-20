all: domain.o test_domain.o main.cpp
	g++ -std=c++17 -Wall domain.o test_domain.o main.cpp -o main.exe
	

domain.o: domain.cpp domain.h
	g++ -std=c++17 -Wall -c domain.cpp

test_domain.o: test_domain.cpp test_domain.h
	g++ -std=c++17 -Wall -c test_domain.cpp

clean:
	rm -rf *.o *.exe