#include <iostream>
using namespace std;

int main()
{
  int rno[5];

  cout<<"Enter roll number of students: \n";

  for (int i = 0; i < 5; i++)
  {
    cin >> rno[i];
  }

  cout << "Roll number of students :- \n";

  for (int i = 0; i < 5; i++)
  {
    cout << rno[i] << " ";
  }

  return 0;
}
