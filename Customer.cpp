#include "Customer.hpp"

Customer:: Customer() {
    mechanicID = 0;
    setSession(0, 0);
}

Customer:: Customer(int x, int h, int m) {
    mechanicID = x;
    setSession(h, m);
}


void Customer:: setMechanicID(int x) {
    mechanicID = x;
}

void Customer:: setSession(int h, int m) {
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
}

int Customer:: getMechanicID() {
    return mechanicID;
}
Appointment Customer:: getSession() {
    return session;
}

bool Customer:: operator < (Customer& x) {
    if (this->session.hours < x.session.hours) {
        return true;
    } else if (this->session.hours == x.session.hours) {
        if (this->session.mins < x.session.mins) {
            return true;
        }
    } else {
        return false;
    }
    return false;
}
bool Customer:: operator > (Customer& x) {
    if (this->session.hours > x.session.hours) {
        return true;
    } else if (this->session.hours == x.session.hours) {
        if (this->session.mins > x.session.mins) {
            return true;
        }
    } else {
            return false;
        }
    return false;
}
bool Customer:: operator == (Customer& x) {
    if (this->session.hours == x.session.hours) {
        if (this->session.mins == x.session.mins) {
            return true;
        }
    }
    return false;
}

void Customer:: print() {
    cout << "-------------------------------------------------" << endl;
    cout << "*Customer Reciept*" << endl;
    cout << "Customer Name: " << this->getName() << endl;
    cout << "Customer ID: " << this->getID() << endl;
    cout << "Customer Age: " << this->getAge() << endl;
    cout << "--------------------------" << endl;
    cout << "Mechanic Name: " << getName() << endl;
    cout << "Mechanic ID: " << getMechanicID() << endl;
    cout << "Appointment Time: " << session.hours << ":" << session.mins << endl;
    cout << "-------------------------------------------------" << endl;
}
