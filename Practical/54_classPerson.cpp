#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
    
};
int main(){
    Person Man;
    Man.setName("Jayesh");
    Man.setAge(19);
    cout<<"Name is: "<<Man.getName()<<endl;
    cout<<"Age is: "<<Man.getAge()<<endl;
    return 0;
}