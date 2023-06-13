#include <iostream>
#include "Zombie.hpp"
int main () {
  Zombie *zom = newZombie("Jeff");
  zom->announce();
  randomChump("Jong");
  delete zom;
  return 0;
}
