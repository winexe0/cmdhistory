#include <iostream>
#include <string>
using namespace std;
int main() {
  string exit;
  system("cd ~");
 std:: cout << "Here is your command history ";
  system("cat .bash_history");
  std::cout << "Press Control C to exit...";
 cin >> exit;
 return 0;
}
