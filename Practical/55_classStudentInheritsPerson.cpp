#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;
    int age;

    public:
    void setAge(int age){
        this->age=age;
    }
    int getAge(){
        return age;
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
};

class Student{public: Person;
    private:
    string studentId;

    public:
    void setStudentId(string studentId){
        this->studentId=studentId;
    }
    string getStudentId(){
        return studentId;
    }
};

int main(){
    Student s;
    s.setName("Jayesh");
    s.setAge(19);
    s.setStudentId("17298");
    cout<<"Namis is: "<<s.getName()<<endl;
    cout<<"Age is: "<<s.getAge()<<endl;
    cout<<"Student ID is: "<<s.getStudentId()<<endl;
    return 0;
}