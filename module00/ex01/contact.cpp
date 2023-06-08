#include "includes/contact.hpp"

void Contact::set_first_name(std::string data)
{
  first_name = data;
}
void Contact::set_last_name(std::string data)
{
  last_name = data;
}
void Contact::set_nickname(std::string data)
{
  nickname = data;
}
void Contact::set_phone(std::string data)
{
  phone = data;
}
void Contact::set_secret(std::string data)
{
  secret = data;
}

std::string Contact::get_first_name(void)
{
  return (first_name);
}
std::string Contact::get_last_name(void)
{
  return (last_name);
}
std::string Contact::get_nickname(void)
{
  return (nickname);
}
std::string Contact::get_phone(void)
{
  return (phone);
}
std::string Contact::get_secret(void)
{
  return (secret);
}
