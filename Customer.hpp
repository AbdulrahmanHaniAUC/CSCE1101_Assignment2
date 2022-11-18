#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>

#include "Person.hpp"

class Customer : public Person {
private:
    int mechanicID;
    Appointment session;
public:
    Customer();
    Customer(int x, int h, int m);
    
    void setMechanicID(int x);
    void setSession(int h, int m);

    
    int getMechanicID();
    Appointment getSession();
    
    bool operator < (Customer& x);
    bool operator > (Customer& x);
    bool operator == (Customer& x);
    
    void print();

};

#endif /* Customer_hpp */
