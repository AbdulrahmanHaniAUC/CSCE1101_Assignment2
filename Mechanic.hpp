#ifndef Mechanic_hpp
#define Mechanic_hpp

#include <stdio.h>
#include <vector>

#include "Person.hpp"

class Mechanic : public Person {
private:
    int appointPerDay;
    vector<Appointment> Bookings;
public:
    Mechanic();
    Mechanic(int x);
    
    void setAppointPerDay(int x);
    void setSession(int h, int m, int key);
    
    int getAppointPerDay();
    Appointment getSessionTime(int key);
    
    void print() override;
    
    bool isAvailable(Appointment session);
};

#endif /* Mechanic_hpp */
