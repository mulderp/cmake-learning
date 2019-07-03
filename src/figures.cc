
#include <iostream>
#include <figures.hh>

using namespace std;

Figure::Figure(const std::string & name_, const double & radius_) : name(name_), radius(radius_) {

  cout << "figure : " << name << endl;


}


