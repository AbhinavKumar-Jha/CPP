//WAP for finding the volume of the cylinder by taking radius and height as input
// 3.14*r*r*h

#include<iostream>
using namespace std;
int main(){
    float radius;
    cout<<"Enter radius :";
    cin>>radius;
    float height;
    cout<<"Enter height :";
    cin>>height;
    float volume;
    volume = 3.141*radius*radius*height;
    cout<<volume;
    return 0;
}