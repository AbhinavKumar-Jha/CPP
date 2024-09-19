#include<iostream>
using namespace std;
class car{
    public:
        string brand;
        string type;
        int price; 
        int seats;
};
void print(car c){
    cout<<c.brand<<" "<<c.type<<" "<<c.seats<<" "<<c.price;
}
int main(){
car c1;
    c1.brand = "Lamborgini";
    c1.type = "Sports";
    c1.seats = 2;
    c1.price = 2000000;

    print(c1);
}

    