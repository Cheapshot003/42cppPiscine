#include <iostream>

int main(int argc, char **argv)
{
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *\n";
  }
  else
  {  
    int i = 1;
    int j = 0;
    while (i < argc)
    {
      j = 0;
      while (argv[i][j])
      {
        if (argv[i][j] >= 97 && argv[i][j] <= 122)
          argv[i][j] -= 32;
        std::cout << argv[i][j];
        j++;
      }
      i++;
    }
    std::cout << std::endl;
    
  }
  return (0);
}
