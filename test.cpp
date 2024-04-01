#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  int age;
  char grade;

public:
  void inputInfo() {
    cout << "Enter student name: ";
    getline(cin, name); 

    cout << "Enter student age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter student grade (A, B, C, D, or F): ";
    cin >> grade;
    cin.ignore(); 
  }

  void displayInfo() {
    cout << "Student Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
  }
};

int main() {
  Student student;

  student.inputInfo();
  cout << endl;

  student.displayInfo();

  return 0;
}
