#include<iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    string position;
    int salary;

    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setPosition(string position){
        this->position=position;
    }
    string getPosition(){
        return position;
    }
    void setSalary(int salary){
        this->salary=salary;
    }
    string getSalary(){
        return salary;
    }
};

int main(){
    Employee e;
    e.setName("Jacky");
    e.setPosition("Agent");
    e.setSalary(50000);
    e.getName();
    e.getPosition();
    e.getSalary();
    return 0;
}

