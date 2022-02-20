// pointers to structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

int main ()
{
  string mystr;

  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;

  cout << "Enter title: ";
  getline (cin, pmovie->title);
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;    //The arrow operator (->) is a dereference operator that is used exclusively with pointers to objects that have members. 
                                     //This operator serves to access the member of an object directly from its address. 
                                     //pmovie->title is equivalant to (*pmovie).amovie
  cout << " (" << pmovie->year << ")\n";

  return 0;
}

/*
Both expressions, pmovie->title and (*pmovie).title are valid, and both access the member title of the data structure pointed by a pointer called pmovie. It is definitely something different than:

 
*pmovie.title


which is rather equivalent to:

 
*(pmovie.title)
*/