#include <iostream>
using namespace std;
class Bus{
    public:
        string name;
        string model;
        int year;
    Bus(string n,string m, int y){
        name=n;
        model=m;
        year=y;

    }
    void displayinformation(){
        cout<<"The name of the Bus is : "<<name<<endl;
        cout<<"The bus model is : "<<model<<endl;
        cout<<"The publishing year is : "<<year<<endl;
    }
};

int main()
{
    Bus b1("HANIF","MARCEDZ", 2024);
    Bus b2("HANIF","FUSO", 2024);
    b1.displayinformation();
    b2.displayinformation();

    return 0;
}
