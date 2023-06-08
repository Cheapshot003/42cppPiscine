#include "includes/phonebook.hpp"

int main (void)
{
  Phonebook phonebook;
  menu(phonebook);
  return 0;
}

void menu(Phonebook phonebook)
{
  std::string input = "";
  std::cout << "OLE'S PHONEBOOK\n";
  std::cout << "ADD - Input new contact\n";
  std::cout << "SEARCH - Search for contacts\n";
  std::cout << "EXIT - Quit the program\n";
  std::cout << "Input: ";
  std::getline(std::cin, input);
  if (input == "EXIT")
    return;
  if (input == "ADD")
    addContact(phonebook);
  else if (input == "SEARCH")
    search(phonebook);
  else
  {
    std::cout << "Invalid Input. Bye";
    return;
  }
}

void addContact(Phonebook phonebook)
{
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone;
  std::string secret;
  std::cout << "First name: ";
  std::getline(std::cin, first_name);
  std::cout << "Last name: ";
  std::getline(std::cin, last_name);
  std::cout << "Nickname: ";
  std::getline(std::cin, nickname);
  std::cout << "Phone number: ";
  std::getline(std::cin, phone);
  std::cout << "Darkest Secret: ";
  std::getline(std::cin, secret);

  Contact newContact;
  newContact.set_first_name(first_name);
  newContact.set_last_name(last_name);
  newContact.set_nickname(nickname);
  newContact.set_phone(phone);
  newContact.set_secret(secret);
  phonebook.addContact(newContact);
  menu(phonebook);
}

void search(Phonebook phonebook)
{
  int i = 0;
  std::string choice = "";
  Contact *contacts;
  int storedContacts = phonebook.getStoredContacts();
  contacts = phonebook.getContacts();
  std::cout << "|  INDEX   |FIRST NAME|LAST NAME | NICKNAME |\n";
  while (i < storedContacts)
  {
    char index = i + 48;
    std::string indexstr = "";
    indexstr += index;
    indexstr += "         ";
    std::string first_name = contacts[i].get_first_name();
    if (first_name.length() > 10)
      first_name = first_name.substr(0, 9).replace(9, 1, ".");
    else {
      while(first_name.length() < 10)
        first_name.append(" ");
    }
    std::string last_name = contacts[i].get_last_name();
    if (last_name.length() > 10)
      last_name = last_name.substr(0, 9).replace(9, 1, ".");
    else {
      while(last_name.length() < 10)
        last_name.append(" ");
    }
    std::string nickname = contacts[i].get_nickname();
    if (nickname.length() > 10)
      nickname = nickname.substr(0, 9).replace(9, 1, ".");
    else {
      while(nickname.length() < 10)
        nickname.append(" ");
    }
    std::cout << "|" << indexstr << "|" << first_name << "|" << last_name << "|" << nickname << "|\n";
    i++;
  }
  std::cout << "Input: ";
  std::getline(std::cin, choice);
  if (choice.length() > 8)
    std::cout << "Wrong index\n";
  else
    printContact(choice.at(0), phonebook, storedContacts);
  menu(phonebook);
}

void printContact(char i, Phonebook phonebook, int storedContacts)
{
  i -= 48;
  std::string lol;
  Contact * contacts;
  if (i >= storedContacts || i < 0)
  {
    std::cout << "Wrong index\n";
    return;
  }
  contacts = phonebook.getContacts();
  std::cout << "First name: " << contacts[(int)i].get_first_name() << std::endl;
  std::cout << "Last name: " << contacts[(int)i].get_last_name() << std::endl;
  std::cout << "Nickname: " << contacts[(int)i].get_nickname() << std::endl;
  std::cout << "Phone number: " << contacts[(int)i].get_phone() << std::endl;
  std::cout << "Darkest secret: " << contacts[(int)i].get_secret() << std::endl;
  std::cout << "Press Enter to continue\n";
  std::getline(std::cin, lol);
}

