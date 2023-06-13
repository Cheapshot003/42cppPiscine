#include <iostream>
#include <string>

class Zombie {
public:
  Zombie();
  Zombie(std::string name1);
  ~Zombie();
  void announce(void);
private:
  std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
