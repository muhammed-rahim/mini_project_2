#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollno = r;
        setmarks(m);
    }

    int getrollno() {
        return rollno;
    }

    string getname() {
        return name;
    }

    float getmarks() {
        return marks;
    }

    void setmarks(float m) {
        if (m >= 0 && m <= 100) {
            marks = m;
        } else {
            cout << "Invalid marks for " << name
                 << ", set to 0." << endl;
            marks = 0;
        }
    }

    void display() {
        cout << "rollno: " << rollno
             << " | " << name
             << " | " << marks << endl;
    }
};

void printresult(Student student) {
    student.display();
}

int main() {
    Student s1("Alfiya", 101, 86.3);
    Student s2("Muhammed", 102, 78.7);
    Student s3("Ravi", 103, 95.0);

    Student batch[3] = {s1, s2, s3};

    for (int i = 0; i < 3; i++) {
        batch[i].display();
    }

    batch[1].setmarks(105);

    for (int i = 0; i < 3; i++) {
        printresult(batch[i]);
    }

    return 0;
}