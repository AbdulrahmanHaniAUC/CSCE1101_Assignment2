#include "Person.hpp"

Person:: Person() {
    name = " ";
    id = 0;
    age = 0;
}
Person:: Person(string n, int i, int a) {
    name = n;
    id = i;
    age = a;
}

void Person:: setName(string x) {
    name = x;
}
void Person:: setID(int x) {
    id = x;
}
void Person:: setAge(int x) {
    age = x;
}

string Person:: getName() {
    return name;
}
int Person:: getID() {
    return id;
}
int Person:: getAge() {
    return age;
}

void Person:: print() {
    
}
