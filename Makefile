all: domain.o test_domain.o entity.o test_entity.o main.cpp
	g++ -std=c++17 -Wall domain.o test_domain.o entity.o test_entity.o main.cpp -o main.exe

domain.o: domain.cpp domain.h
	g++ -std=c++17 -Wall -c domain.cpp

test_domain.o: test_domain.cpp test_domain.h
	g++ -std=c++17 -Wall -c test_domain.cpp

entity.o: entity.cpp entity.h
	g++ -std=c++17 -Wall -c entity.cpp

test_entity.o: test_entity.cpp test_entity.h
	g++ -std=c++17 -Wall -c test_entity.cpp

clean:
	rm -rf *.o *.exe