#include <iostream>
using namespace std;

class Vehicle {
public:
    int MaxSpeed;
    int Weight;

    void Run() {
        cout << "Vehicle is running." << endl;
    }

    void Stop() {
        cout << "Vehicle is stopped." << endl;
    }
};

class Bicycle : virtual public Vehicle {
public:
    int Height;
};

class Motorcar : virtual public Vehicle {
public:
    int SeatNum;
};

class Motorcycle : public Bicycle, public Motorcar {
public:
    int WheelNum;

    void Run() {
        cout << "Motorcycle is running." << endl;
    }

    void Stop() {
        cout << "Motorcycle is stopped." << endl;
    }
};


int main() {
    Motorcycle my_motorcycle;
    my_motorcycle.MaxSpeed = 100;
    my_motorcycle.Weight = 200;
    my_motorcycle.Height = 50;
    my_motorcycle.SeatNum = 2;
    my_motorcycle.WheelNum = 2;
    my_motorcycle.Run();
    my_motorcycle.Stop();
    return 0;
}
