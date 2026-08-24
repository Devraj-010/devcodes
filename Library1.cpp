#include<iostream>
#include<string>

using namespace std;

int main()
{
 int id1, id2, id3;
 string title1, title2, title3;

 cout<<"\nEnter Book 1 Id : ";
 cin>>id1;

 cin.ignore();
 cout<<"\nEnter Book 1 Title: ";
 getline(cin, title1);

 cout<<"\nEnter Book 2 Id : ";
 cin>>id2;

 cin.ignore();
 cout<<"\nEnter Book 2 Title: ";
 getline(cin, title2);

 cout<<"\nEnter Book 3 Id : ";
 cin>>id3;

 cin.ignore();
 cout<<"\nEnter Book 3 Title: ";
 getline(cin, title3);

 cout<<"\n__________LIBRARY BOOKS__________";

 cout<<"\n\nBook 1 id: "<<id1;
 cout<<"\nBook 1 Title: "<<title1;

 cout<<"\n\nBook 2 id: "<<id2;
 cout<<"\nBook 2 Title: "<<title2;

 cout<<"\n\nBook 3 id: "<<id3;
 cout<<"\nBook 3 Title: "<<title3<<endl;

 return 0;

}
