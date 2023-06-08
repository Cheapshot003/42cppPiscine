#ifndef CONTACT_H
#define CONTACT_H

#include <string>
class Contact {
public:
  //Setters
  void set_first_name(std::string data);
  void set_last_name(std::string data);
  void set_nickname(std::string data);
  void set_phone(std::string data);
  void set_secret(std::string data);
  //Getters
  std::string get_first_name(void);
  std::string get_last_name(void);
  std::string get_nickname(void);
  std::string get_phone(void);
  std::string get_secret(void);
private:
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string phone;
  std::string secret;
};

#endif // !CONTACT_H
