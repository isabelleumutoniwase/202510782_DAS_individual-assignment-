#ifndef CLASSES_H
#define CLASSES_H

#include<iostream>
using namespace std;

class User{
protected:
    string name,email,phone;

public:
    User(){}

    User(string n,string e,string p){
        name=n;
        email=e;
        phone=p;
    }

    string getName(){
        return name;
    }

    string getEmail(){
        return email;
    }

    string getPhone(){
        return phone;
    }
};

class VehicleOwner : public User{
public:
    VehicleOwner(){}

    VehicleOwner(string n,string e,string p)
    :User(n,e,p){}
};

class Vehicle{
public:
    string plate,type;
    int year;
    VehicleOwner owner;

    Vehicle(string p,string t,int y,VehicleOwner o)
    :owner(o){
        plate=p;
        type=t;
        year=y;
    }
};

#endif
