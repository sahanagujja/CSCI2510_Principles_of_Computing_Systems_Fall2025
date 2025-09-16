//Sahana Gujja
//9/16/2025

#include <unistd.h>

int main(int argc, char* argsv[]) 
{
  const char *greeting = "Hello, World!\n";
  write(STDOUT_FILENO, greeting, 17);

return 0;
}
