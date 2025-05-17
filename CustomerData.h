// CustomerData class

#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
using namespace std;
#include "PersonData.h"

// customer data class derivded from person data

class CustomerData :public PersonData{

  //priv vars

  private:
  int customerNumber;
  bool mailingList;

  //public function 

  public:

  //constructor

  CustomerData(string last, string first, string ad, string c, string s, string z, string num, int custNum, bool list): PersonData(last, first, ad, c, s, z, num){
    customerNumber = custNum;
    mailingList = list;
  }

  //mutators setters

  void setcustomerNumber(int num){customerNumber = num;}
  void setMailingList(bool list){mailingList = list;}

  //accessors getters

  int getCustomerNumber() const {return customerNumber;}
  bool getMailingList() const {return mailingList;}
};
#endif
