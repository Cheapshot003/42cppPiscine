#include "Zombie.hpp"

void Zombie::announce( void )
{
  std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name1)
{
  name = name1;
}

Zombie::~Zombie(void)
{
}
