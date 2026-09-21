#include <iostream>
using namespace std;

int main() {

  int serno;
  int rno[5];

  cout << "Enter roll number of students: \n";
  for (int i = 0; i < 5; i++)
  {
    cin >> rno[i];
  }

  cout << "Enter any roll number to search: \n";
  cin >> serno;
  for (int i = 0; i < 5; i++)
  {
    if (rno[i] == serno)
    {
      cout << "Student roll number Found! \n";
      return 0;
    }
    else
    {
      cout << "Student Roll Number Not Found! \n";
      return 0;
    }
  }
  return 0;
}
