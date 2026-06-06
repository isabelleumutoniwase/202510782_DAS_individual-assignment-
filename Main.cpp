#include<iostream>
#include "classes.h"

using namespace std;

void saveRecord(Vehicle);
void displayRecords();
void searchVehicle(string);

int main(){

    int choice;

    do{

        cout<<"\n1.Add Vehicle";
        cout<<"\n2.Display Records";
        cout<<"\n3.Search Vehicle";
        cout<<"\n4.Exit";
        cout<<"\nChoice: ";
        cin>>choice;

        if(choice==1){

            string plate,type,name,email,phone;
            int year;

            cout<<"Plate Number: ";
            cin>>plate;

            cout<<"Vehicle Type: ";
            cin>>type;

            cout<<"Year: ";
            cin>>year;

            cin.ignore();

            cout<<"Owner Name: ";
            getline(cin,name);

            cout<<"Email: ";
            cin>>email;

            cout<<"Phone: ";
            cin>>phone;

            VehicleOwner owner(name,email,phone);

            Vehicle v(plate,type,year,owner);

            saveRecord(v);
        }

        else if(choice==2){

            displayRecords();
        }

        else if(choice==3){

            string plate;

            cout<<"Enter Plate Number: ";
            cin>>plate;

            searchVehicle(plate);
        }

    }while(choice!=4);

    return 0;
}
