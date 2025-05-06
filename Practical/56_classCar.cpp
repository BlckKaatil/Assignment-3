#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
    string make;
    string model
    int year;

    public:
    void setMake(string make){
        this->make=make;
    }
    string getMake(){
        return make;
    }
    void setBuild(string build){
        this->build=build;
    }
    string getBuild(){
        return make;
    }
    void setYear(int year){
        this->year=year;
    }
    string getYear(){
        return year;
    }
};

int main(){
    Car toyota;
    toyota.setMake("Hybrid");
    toyota.setBuild("Suv");
    toyota.setYear(2008);
    cout<<"Car make is: "<<toyota.getMake()<<endl;
    cout<<"Car build is: "<<toyota.getBuild()<<endl;
    cout<<"Car year is: "<<toyota.getYear()<<endl;
    return 0;

}