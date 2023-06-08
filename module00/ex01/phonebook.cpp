#include "./includes/phonebook.hpp"

Phonebook::Phonebook(void)
{
  storedContacts = 0;
}

void Phonebook::addContact(Contact contact)
{
  contacts[storedContacts++] = contact;
}

Contact * Phonebook::getContacts(void)
{
  return (contacts);
}

int Phonebook::getStoredContacts(void)
{
  return (storedContacts);
}

