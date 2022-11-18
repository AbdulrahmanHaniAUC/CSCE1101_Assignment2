#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

struct Appointment {
    int hours;
    int mins;
};

class Person {
private:
    string name;
    int id;
    int age;
public:
    Appointment session;
    
    Person();
    Person(string n, int i, int a);
    
    void setName(string x);
    void setID(int x);
    void setAge(int x);
    
    string getName();
    int getID();
    int getAge();
    
    virtual void print();
};

#endif /* Person_hpp */

