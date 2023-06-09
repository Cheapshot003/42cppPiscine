CFLAGS = -Wall -Wextra -Werror

tests: Account.o tests.o
	g++ $(CFLAGS) Account.o tests.o -o tests

Account.o tests.o: Account.cpp tests.cpp
	g++ $(CFLAGS) -c Account.cpp tests.cpp

clean:
	rm -rf *.o tests

re: clean tests

