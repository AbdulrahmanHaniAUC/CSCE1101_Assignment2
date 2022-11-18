#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Queue.hpp"
#include "Customer.hpp"
#include "Mechanic.hpp"
#include "Person.hpp"

using namespace std;

//void fileMechanics(Mechanic& employee, int& line);
//void fileCustomers(Customer& client, int& line);

int main(){
    Queue<Customer> customerQueue;
    Queue<Mechanic> mechanicQueue;
    
    Mechanic employee1(1);
    employee1.setName("Ayman");
    employee1.setAge(35);
    employee1.setID(11);
    employee1.setSession(13, 00, 0);
    
    Mechanic employee2(2);
    employee2.setName("Kahlid");
    employee2.setAge(29);
    employee2.setID(222);
    employee2.setSession(16, 00, 1);
    employee2.setSession(19, 00, 2);
    
    Mechanic employee3(1);
    employee3.setName("Mai");
    employee3.setAge(41);
    employee3.setID(333);
    employee3.setSession(18, 45, 3);

    
    Customer client1;
    client1.setName("Ahmed");
    client1.setAge(21);
    client1.setID(732);
    client1.setMechanicID(111);
    client1.setSession(11, 00);
    
    Customer client2;
    client2.setName("Sara");
    client2.setAge(47);
    client2.setID(645);
    client2.setMechanicID(222);
    client2.setSession(12, 00);

    Customer client3;
    client3.setName("Kareem");
    client3.setAge(33);
    client3.setID(839);
    client3.setMechanicID(222);
    client3.setSession(18, 00);

    
    Customer client4;
    client4.setName("Mohamed");
    client4.setAge(19);
    client4.setID(690);
    client4.setMechanicID(333);
    client4.setSession(18, 45);
    
//    int line = 0;
//
//    fileMechanics(employee1, line);
//    fileMechanics(employee2, line);
//    fileMechanics(employee3, line);
//
//    fileCustomers(client1, line);
//    fileCustomers(client2, line);
//    fileCustomers(client3, line);
//    fileCustomers(client4, line);

    mechanicQueue.push(employee1);
    mechanicQueue.push(employee2);
    mechanicQueue.push(employee3);
    
    if (mechanicQueue.check(0).isAvailable(client1.getSession())) {
        client1.setMechanicID(employee1.getID());
    }
    if (mechanicQueue.check(0).isAvailable(client2.getSession())) {
        client2.setMechanicID(employee2.getID());
    }
    if (mechanicQueue.check(2).isAvailable(client3.getSession())) {
        client3.setMechanicID(employee3.getID());
    }
    if (mechanicQueue.check(3).isAvailable(client4.getSession())) {
        client4.setMechanicID(employee1.getID());
    }
    
    customerQueue.push(client1);
    customerQueue.push(client2);
    customerQueue.push(client3);
    customerQueue.push(client4);

    customerQueue.pop().print();
    customerQueue.pop().print();
    customerQueue.pop().print();
    customerQueue.pop().print();
    
    return 0;
}
/*
void fileMechanics(Mechanic& employee, int& line) {
    ifstream myFile;
    myFile.open("mechanics.txt", ios::in);
    
    string myText[18];
    
    for (int i = 0; i < 18; i++) {
        getline(myFile, myText[i]);
    }
    
    int sessionKey = 0;
    
    employee.setName(myText[line]);
    line++;
    
    employee.setAge(stoi(myText[line]));
    line++;
    
    employee.setID(stoi(myText[line]));
    line++;
    
    employee.setAppointPerDay(stoi(myText[line]));
    line++;
    
    for (int i = line; i < ((employee.getAppointPerDay() * 2) + (line - 1)); i++) {
        employee.setSession(stoi(myText[i]), stoi(myText[i + 1]), sessionKey);
        i++;
        sessionKey++;
    }
    
    line = (employee.getAppointPerDay() * 2) + line;
    
    myFile.close();
    
}

void fileCustomers(Customer& client, int& line) {
    ifstream myFile;
    myFile.open("customers.txt", ios::in);
    
    string myText[20];
    
    for (int i = 0; i < 20; i++) {
        getline(myFile, myText[i]);
    }
    
    client.setName(myText[line]);
    line++;
    
    client.setAge(stoi(myText[line]));
    line++;
    
    client.setID(stoi(myText[line]));
    line++;
    
    client.setSession(stoi(myText[line]), stoi(myText[line + 1]));
    line = line + 2;
    
    myFile.close();
}
*/
