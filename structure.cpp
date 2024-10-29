#include <iostream>
using namespace std;
struct Car{
    string brand;
    string model;
    int year;
    void display(){
    cout<<"The bus name is : "<<brand<<endl;
    cout<<"The bus model is :"<<model<<endl;
    cout<<"The publishing year is : "<<year<<endl;
    cout<<endl;
    }
};
int main(){
    Car c1={"HANIF","VOLVO",2024};
    Car c2={"HANIF","HINO-RM2",2024};
    c1.display();
    c2.display();
}
