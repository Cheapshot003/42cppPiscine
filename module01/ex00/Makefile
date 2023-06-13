CFLAGS = -Wall -Wextra -Werror -std=c++98

zombie: Zombie.o main.o
	g++ $(CFLAGS) Zombie.o main.o -o zombie

zombie.o main.o:
	g++ $(CFLAGS) -c Zombie.cpp main.cpp

clean:
	rm -rf *.o
	rm -rf zombie
