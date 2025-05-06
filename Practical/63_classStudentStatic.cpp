#include <iostream>
using namespace std;

class Student {
    static int totalStudents;
public:
    Student() {
        totalStudents++;
    }

    static int getTotalStudents() {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Total students enrolled: " << Student::getTotalStudents() << endl;

    return 0;
}
