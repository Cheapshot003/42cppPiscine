CFLAGS = -Wall -Werror -Wextra -g

COMP = g++

SRCS = phonebook.cpp contact.cpp main.cpp

OBJS = phonebook.o contact.o main.o

$(NAME):
	phonebook

phonebook: $(OBJS)
	@echo "Linking..."
	@$(COMP) $(CFLAGS) $(OBJS) -o phonebook

$(OBJS): $(SRCS)
	@echo "Compiling..."
	@$(COMP) $(CFLAGS) -c $(SRCS)

clean:
	@echo "Removing..."
	rm -rf *.o
	rm -rf phonebook

re: clean phonebook
