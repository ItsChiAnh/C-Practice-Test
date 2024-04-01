#include<string>
#include<iostream>

using namespace std;

struct student { // khúc này em xài struct cho tiện mấy thứ nha anh
    string first_name;
    string last_name;
    int roll_number;
    double cgpa;
} students[110];

int number_of_students = 0;

void addStudentDetails()
{
 
    cout<<"Enter the new student details\n";
    
    cout<<"Enter the Roll Number of the student\n";
    int roll_no;
    cin>>roll_no;
    
    for(int i = 0; i < number_of_students; i++)
    {
       if(students[i].roll_number == roll_no)
       {
          cout << " Already exists\n";
          return;
       }
    }
    
    cout<<"Enter the first name of the student\n";
    cin>>students[number_of_students].first_name;
    
    cout<<"Enter the last name of the student\n";
    cin>>students[number_of_students].last_name;
    
    students[number_of_students].roll_number = roll_no;
    
    cout<<"Enter the CGPA of the student\n";
    cin>>students[number_of_students].cgpa;
    
    
    number_of_students++;
}

void findStudentByRollNumber()
{
    int roll_no;
    cout<<"Enter the Roll Number of the student\n";
    cin>>roll_no;
    
    bool found = false;
    
    for (int i = 0; i < number_of_students; i++) {
        if (roll_no == students[i].roll_number) {
            found = true;
            
            cout<<"The Students Details are:\n";
            
            cout<<"The First name is " << students[i].first_name << "\n";
            cout<<"The Last name is " << students[i].last_name << "\n";
            cout<<"The CGPA is " << students[i].cgpa << "\n";
            
            break;
      }
    }
    
    if(!found)
       cout<<"no student\n";
}

void findStudentByFirstName()
{
    string firstName;
    cout<<"Enter the first name of the student\n";
    cin>>firstName;
    
    bool found = false;
    
    for (int i = 0; i < number_of_students; i++) {
        if (firstName == students[i].first_name) {
            found = true;
            
            cout<<"The Students Details are\n";
            
            cout<<"The First name is " << students[i].first_name << "\n";
            cout<<"The Last name is " << students[i].last_name << "\n";
            cout<<"The CGPA is " << students[i].cgpa << "\n";
      }
    }
    
    if(!found)
       cout<<"no student\n";
}

void findTotalStudents()
{
    cout<<"The total number Students are "<< number_of_students <<"\n";
}

void deleteStudentByRollNumber()
{
    int roll_no;
    cout<<"Enter the Roll Number that you want to delete\n";
    cin>>roll_no;
    
    bool found=false;
    for (int i = 0; i < number_of_students; i++) {
        if (roll_no == students[i].roll_number) {
            found = true;
            for (int j = i; j < 109; j++)
                students[j] = students[j + 1];
            number_of_students--;
        }
    }
    
    if(found){
       cout<<"Removed Successfully\n";
    }
    else{
       cout<<"Roll number not found\n";
    }
    
}

void updateStudentDetails()
{
 
    cout<<"Enter the roll number whose details you want to update\n";
    int roll_no;
    cin>>roll_no;
    
    bool found=false;
    for (int i = 0; i < number_of_students; i++) {
        if (students[i].roll_number == roll_no) {
        
            found=true;
            cout<< "1. update first name\n"
                   "2. update last name\n"
                   "3. update roll number.\n"
                   "4. update CGPA\n";
                   
            int choice;
            cin>>choice;
            
            switch(choice) {
            case 1:
                cout<<"Enter the new first name\n";
                cin>>students[i].first_name;
                break;
                
            case 2:
                cout<<"Enter the new last name\n";
                cin>>students[i].last_name;
                break;
                
            case 3:
                cout<<"Enter the new roll number\n";
                cin>>students[i].roll_number;
                break;
                
            case 4:
                cout<<"Enter the new CGPA\n";
                cin>>students[i].cgpa;
                break;

        }
     }
   }  
   
   if(found){
     cout<<"Details updated successfully.\n";
   }
   else{
     cout<<"Student not found.\n";
   }
}

int main()
{
    int choice;
    while (true) {
        cout<<"Choices of the tasks that you want to perform\n";
        
        cout<<"1. Add new Student to the database\n";
        
        cout<<"2. Search Student by Roll Number\n";
               
        cout<<"3. Search Student by First Name\n";
               
        cout<<"4. Count Total number of Students\n";
               
        cout<<"5. Delete the Student by Roll Number\n";
               
        cout<<"6. Update Student Details by Roll Number\n";
               
        cout<<"7. Exit the program\n";
        
        cout<<"Enter your choice\n";
        cin>>choice;
        
        switch (choice) {
        case 1:
            addStudentDetails();
            break;
            
        case 2:
            findStudentByRollNumber();
            break;
            
        case 3:
            findStudentByFirstName();
            break;
            
        case 4:
            findTotalStudents();
            break;
            
        case 5:
            deleteStudentByRollNumber();
            break;
            
        case 6:
            updateStudentDetails();
            break;
            
        case 7:
            exit(0);
            break;
        }
    }
    
    return 0;
}



