#include<iostream>
using namespace std;
class car{
    public:
        string brand;
        string type;
        int price; 
        int seats;

    car(){ // default constructor

    }
    car(string a, string b, int c, int d){ // parameterized constructor
        brand = a;
        type = b;
        seats = c;
        price = d;
        
}

};
// void print(car c){
//     cout<<c.brand<<" "<<c.type<<" "<<c.seats<<" "<<c.price<<endl;
// }
int main(){
car c1("Lamborgini", "Sports", 2, 2000000 );
    // c1.brand = "Lamborgini";
    // c1.type = "Sports";
    // c1.seats = 2;
    // c1.price = 2000000;
    car c2;
    c2.brand = "Fortuner";
    c2.type = "family";
    c2.seats = 6;
    c2.price = 1000000;
    // print(c1);
    // print(c2);

    cout<<c1.brand<<" "<<c1.type<<" "<<c1.seats<<" "<<c1.price<<endl;
    cout<<c2.brand<<" "<<c2.type<<" "<<c2.seats<<" "<<c2.price<<endl;
}

    