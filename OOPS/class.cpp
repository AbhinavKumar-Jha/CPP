// user defined data types in C++

#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int rno;
        float gpa;
};
class sports{
    public:
        string name;
        string player;
        int age;
        string nickname;
};
// using function
void print(sports b){
    cout<<b.name<<" "<<b.player<<" "<<b.age<<" "<<b.nickname<<endl;
}
int main(){
    student a1;
    a1.name ="Abhinav";
    a1.gpa = 9.5;
    a1.rno = 1;
    // cout<<a1.name<<endl;

    student a2;
    a2.name = "Aditya";
    a2.rno = 02;
    // cout<<"Enter the gpa of student :";
   // cin>>a2.gpa;
   // cout<<a2.name<<endl;
  // cout<<a2.gpa<<endl;

    sports b1;
    b1.name = "Cricket";
    b1.player = "Virat Kohli";
    b1.age = 34;
    b1.nickname = "King";

    // cout<<"Name of the sports : "<<b1.name<<endl;
    // cout<<"Name of the Player : "<<b1.player<<endl;

    sports b2;
    b2.name = "Football";
    b2.player = "Messi";
    b2.age = 35;
    b2.nickname = "Goat";

    print(b1);
    print(b2);

    
}
