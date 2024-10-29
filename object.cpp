#include<iostream>
using namespace std;

class Bus{
    public:
        string name;
        string model;
        int year;

    void displayinfo()
    {
        cout<<"The bus name is : "<<name<<endl;
        cout<<"The bus model is : "<<model<<endl;
        cout<<"The publishing year is : "<<year<<endl;

    }
};

int main(){
     Bus b1;
     b1.name="HANIF";
     b1.model="HINO AKJ";
     b1.year=2024;
     b1.displayinfo();
     return 0;
}
