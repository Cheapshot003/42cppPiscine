CFLAGS = -Wall -Werror -Wextra -g

COMP = g++

$(NAME):
	megaphone

megaphone: megaphone.o
	@echo "Linking..."
	@$(COMP) $(CFLAGS) megaphone.o -o megaphone

megaphone.o: megaphone.cpp
	@echo "Compiling..."
	@$(COMP) $(CFLAGS) -c megaphone.cpp

clean:
	@echo "Removing..."
	rm -rf *.o
	rm -rf megaphone

re: clean megaphone
