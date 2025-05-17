# projectCustomerDataA
CS1337- Project Customer Data Part A
Design a class named PersonData with the following member variables:
• lastName
• firstName
• address
• city
• state
• zip
• phone
Write the appropriate accessor and mutator functions for these member variables.

Next, design a class named CustomerData , which is derived from the PersonData
class. The CustomerData class should have the following member variables:
• customerNumber
• mailingList
The customerNumber variable will be used to hold a unique integer for each customer.
The mailingList variable should be a bool . It will be set to true if the customer wishes to be on a mailing list, or false if the customer does not wish to be on a mailing list. Write appropriate accessor and mutator functions for these member variables.
Demonstrate an object of the CustomerData class in a simple program.
Note : You need to pass the details of the customer data using constructor and mutator functions
Your Input
```
Customer 1 Data:
Smith, Joan, 123 Main Street, Smithville, NC, 99999, 12345, true

Customer 2 Data: 
Jones, Jenny, 555 East Street, Jonesville, VA, 88888, 77777, false
```
Expected Output:
```
Customer #1
-----------
Last Name: Smith
First Name: Joan
Address: 123 Main Street
City: Smithville
State: NC
ZIP: 99999
Customer Number: 12345
Mailing List: Yes

Customer #2
-----------
Last Name: Jones
First Name: Jenny
Address: 555 East Street
City: Jonesville
State: VA
ZIP: 88888
Customer Number: 77777
Mailing List: No
```
