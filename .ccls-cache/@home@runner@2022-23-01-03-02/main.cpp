// create a function to return the length of a string

#include <iostream>

int len = 0;

int lenOfstr(char str[])
{

  do
  {
    len++;
  }while(str[len] != '\0');
  
  return len;
}

int main() {
  char str[] = "something";
  len = 0;
  std::cout << "What string would you like the length of?" << std::endl;
  scanf("input: %s", str);
  std::cout << lenOfstr(str) << " is the length of " << str << std::endl;
  return 0;
}