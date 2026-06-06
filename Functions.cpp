#include<iostream>
#include<fstream>
#include<sstream>
#include "classes.h"

using namespace std;

void saveRecord(Vehicle v){

    ofstream file("records.txt",ios::app);

    file<<v.plate<<","
        <<v.type<<","
        <<v.year<<","
        <<v.owner.getName()<<","
        <<v.owner.getEmail()<<","
        <<v.owner.getPhone()
        <<endl;

    file.close();
}

void displayRecords(){

    ifstream file("records.txt");
    string line;

    while(getline(file,line)){

        stringstream ss(line);

        string plate,type,year,name,email,phone;

        getline(ss,plate,',');
        getline(ss,type,',');
        getline(ss,year,',');
        getline(ss,name,',');
        getline(ss,email,',');
        getline(ss,phone,',');

        cout<<plate<<"\t"
            <<type<<"\t"
            <<year<<"\t"
            <<name<<"\t"
            <<email<<"\t"
            <<phone<<endl;
    }

    file.close();
}

void searchVehicle(string target){

    ifstream file("records.txt");
    string line;
    bool found=false;

    while(getline(file,line)){

        if(line.find(target)!=string::npos){

            cout<<line<<endl;
            found=true;
        }
    }

    if(!found)
        cout<<"Vehicle not found"<<endl;

    file.close();
}
