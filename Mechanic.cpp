#include "Mechanic.hpp"

Mechanic:: Mechanic() {
    appointPerDay = 0;
    Bookings.resize(appointPerDay);
}

Mechanic:: Mechanic(int x) {
    appointPerDay = x;
    Bookings.resize(appointPerDay);
}


void Mechanic:: setAppointPerDay(int x) {
    appointPerDay = x;
}
void Mechanic:: setSession(int h, int m, int key) {
    Appointment session;
    
    if (h < 0 || h > 24) {
        cout << "Please enter a number between 0 and 24 for the hours." << endl;
    } else {
        session.hours = h;
    }
    
    if (m < 0 || m > 60) {
        cout << "Please enter a number between 0 and 60 for the minutes." << endl;
    } else {
        session.mins = m;
    }
    
    Bookings[key] = session;
}

int Mechanic:: getAppointPerDay() {
    return appointPerDay;
}
Appointment Mechanic:: getSessionTime(int key) {
    return Bookings[key];
}

void Mechanic:: print() {
    cout << "*Mechanic Information*" << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "ID: " << this->getID() << endl;
    cout << "Age: " << this->getAge() << endl;
    cout << "Number of Appointment Today: " << this->getAppointPerDay() << endl;
    cout << "Appointment Times: " << endl;
    for (int i = 0; i < appointPerDay; i++) {
        cout << Bookings[i].hours << ":" << Bookings[i].mins << endl;
    }
}

bool Mechanic:: isAvailable(Appointment session) {
    for (int i = 0; appointPerDay; i++) {
        if (session.hours == getSessionTime(i).hours && session.mins == getSessionTime(i).mins) {
            return false;
        }
    }
    return true;
}
