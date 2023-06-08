#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "contact.hpp"

class Phonebook {
public:
  Phonebook(void);
  void addContact(Contact contact);
  Contact * getContacts(void);
  int getStoredContacts(void);

private:
  Contact contacts[8];
  int storedContacts;
};
void printContact(char i, Phonebook phonebook, int storedContacts);
void menu(Phonebook phonebook);
void addContact(Phonebook phonebook);
void search(Phonebook phonebook);
#endif // !PHONEBOOK_H
