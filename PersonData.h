// PersonData class

#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

// class func for person data

class PersonData{

  // priv vars

  private:
  string lastName;
  string firstName;
  string address;
  string city;
  string state;
  string zip;
  string phone;
  
  //public funcs

  public:

  // constructor

  PersonData() {}
  PersonData(string last, string first, string ad, string c, string s, string z, string num){
    lastName = last;
    firstName = first;
    address = ad;
    city = c;
    state = s;
    zip = z;
    phone = num;
  }

  //mutators setters

  void setLastName(string last){ lastName = last;}
  void setFirstName(string first){ firstName = first;}
  void setAddress(string ad){address = ad;}
  void setCity(string c){city = c;}
  void setState(string s){state = s;}
  void setZip(string z){zip = z;}
  void setPhone(string num){phone = num;}

  //accessors getters
 
  string getLastName() const{return lastName;}
  string getFirstName() const{return firstName;}
  string getAddress() const{ return  address;}
  string getCity() const{return city;}
  string getState() const{return state;}
  string getZip() const{return zip;}
  string getPhone() const{return phone;}
};
#endif
