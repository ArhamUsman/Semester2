/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent toll. Mostly they do, but
sometimes a car goes by without paying. The tollbooth keeps track of the number of cars that have gone by, and of
the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type unsigned int to hold the total
number of cars, and a type double to hold the total amount of money collected. A constructor initializes both of

these to 0. A member function called payingCar() increments the car total and adds 0.50 to the cash total. Another
function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a member function called
display() displays the two totals. Make appropriate member functions const.
Include a program to test this class. This program should allow the user to push one key to count a paying car, and
another to count a nonpaying car. Pushing the Esc key should cause the program to print out the total cars and
total cash and then exit.
*/

#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth{
    private:
    int car;
    double money;
    
    public:
    tollBooth(){
        car=0;
        money=0;
    }
    void payingCar(){
        car++;
        money+=0.5;
    }
    void nopayCar(){
        car++;
    }
    void display(){
        cout<<"Total no of Cars: "<<car<<endl;
        cout<<"Total Cash collected: "<<money<<endl;
    }  
};

int main(){
    tollBooth t1;
    char c;
    cout<<"Press 'a' to count a paying car\n";
    cout<<"Press 'd' to count a non-paying car\n";
    cout<<"Press Esc to exit\n";
    while (c!=27){
        c=_getch();
        if (c=='a') t1.payingCar();
        if (c=='d') t1.nopayCar();
    }
    t1.display();
}