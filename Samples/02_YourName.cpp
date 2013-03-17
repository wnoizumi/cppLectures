#include <iostream>
#include <string>

using namespace std;

int main() {
  string name, surname;
  cout << "What's your first name?\n";
  cin >> name;
  cout << "What's your surname?\n";
  cin >> surname;
  cout << "\n---------------------\n";
  cout << "Your full name is " << name << " " << surname;
  return 0; 
}
