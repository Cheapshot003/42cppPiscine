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
