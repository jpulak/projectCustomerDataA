// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes

#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

// func to display info

void displayData(const CustomerData& customer, int num){
  cout << "Customer #" << num << endl;
  cout << "-----------" << endl;
  cout << "Last Name: " << customer.getLastName() << endl;
  cout << "First Name: " << customer.getFirstName() << endl;
  cout << "Address: " << customer.getAddress() << endl;
  cout << "City: " << customer.getCity() << endl;
  cout << "State: " << customer.getState() << endl;
  cout << "ZIP: " << customer.getZip() << endl;
  cout << "Customer Number: " << customer.getCustomerNumber() << endl;
  bool wantMail = customer.getMailingList();
  string status; // output proper mailing list status
  if (wantMail){
    status = "Yes";
  }
  else
  {
    status = "No";
  }
  cout << "Mailing List: " << status << endl << endl;
}

//driver

int main()
{

    // create two customers
    
    CustomerData c1("Smith", "Joan", "123 Main Street", "Smithville", "NC", "99999", "555-1234", 12345, true);
    CustomerData c2("Jones", "Jenny", "555 East Street", "Jonesville", "VA", "88888", "555-5678", 77777, false);

    // display info thro func
    
    displayData(c1, 1);
    displayData(c2, 2);

    return 0;
}
