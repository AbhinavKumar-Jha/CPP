#include<iostream>
using namespace std;
class Student{ // user defined datatypes
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, int marks){ // Constructor
        this->name=name;
        this->rno=rno;
        this->marks=marks;
    }
};
// void change(Student &s){
//     s.name="Aryan";
// }

void change(Student* s){
    s->name="Aryan";
}
int main(){
    // Student s;
    // s.name = "Abhinav";
    // s.rno = 02;
    // s.marks = 87.9;

    // Student s("Abhinav",02,87.9);
    // cout<<s.name<<endl;
    // change(s);
    // cout<<s.name<<endl;

    // Student* ptr=&s;
    // cout<<s.name<<endl;
    // // (*ptr).name="Aryan";
    // ptr->name="Aryan";
    // cout<<s.name<<endl;

    Student* s = new Student("Abhinav",02,87.9);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
    return 0;
}