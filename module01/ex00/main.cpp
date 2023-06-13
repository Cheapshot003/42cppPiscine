#include <iostream>
#include "main.hpp"
int main () {
  Zombie *zom = newZombie("Jeff");
  zom->announce();
  randomChump("Jong");
  delete zom;
  return 0;
}

Zombie* newZombie(std::string name)
{
  Zombie *zom = new Zombie(name);
  return (zom);
}

void randomChump(std::string name)
{
  Zombie zom = Zombie(name);
  zom.announce();
  return;
}
