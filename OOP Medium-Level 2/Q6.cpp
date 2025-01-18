#include <iostream>
using namespace std;
class vehicle
{
protected:
    float milage;
    int price;
};
class cars : public vehicle
{
protected:
    int ownership_coast;
    int warranty;
    int seat_capacity;
    string fueltype;
};
class Audi : public cars
{
private:
    int model;

public:
    void get_Audi()
    {
        cout << "Enter the model: ";
        cin >> model;
        cout << "Enter Milage: ";
        cin >> vehicle::milage;
        cout << "Enter Price: ";
        cin >> vehicle::price;
        cout << "Enter Ownership cost: ";
        cin >> cars::ownership_coast;
        cout << "Enter the warranty (in years): ";
        cin >> cars::warranty;
        cout << "Enter seating capacity:  ";
        cin >> cars ::seat_capacity;
        cout << "Enter fuel type (petrol/diesel): ";
        cin >> fueltype;
    }
    void set_Audi()
    {
        cout << "Model of car: " << model << endl;
        cout << "Milage of car: " << vehicle::milage << endl;
        cout << "Price of car: " << vehicle::price << endl;
        cout << "Ownership Cost: " << cars::ownership_coast << endl;
        cout << "Warranty (in years): " << cars::warranty << endl;
        cout << "Seating Capacity: " << cars::seat_capacity << endl;
        cout << "Fuel type (petrol/diesel): " << cars::fueltype << endl;
    }
};
class Ford : public cars
{
private:
    int model;

public:
    void get_Ford()
    {
        cout << "Enter the model: ";
        cin >> model;
        cout << "Enter Milage: ";
        cin >> vehicle::milage;
        cout << "Enter Price: ";
        cin >> vehicle::price;
        cout << "Enter Ownership cost: ";
        cin >> cars::ownership_coast;
        cout << "Enter the warranty (in years): ";
        cin >> cars::warranty;
        cout << "Enter seating capacity:  ";
        cin >> cars ::seat_capacity;
        cout << "Enter fuel type (petrol/diesel): ";
        cin >> fueltype;
    }
    void set_Ford()
    {
        cout << "Model of car: " << model << endl;
        cout << "Milage of car: " << vehicle::milage << endl;
        cout << "Price of car: " << vehicle::price << endl;
        cout << "Ownership Cost: " << cars::ownership_coast << endl;
        cout << "Warranty (in years): " << cars::warranty << endl;
        cout << "Seating Capacity: " << cars::seat_capacity << endl;
        cout << "Fuel type (petrol/diesel): " << cars::fueltype << endl;
    }
};
class bike : public vehicle
{
protected:
    int cylinders, gears;
    string cooling_type, wheels;
    float fuel_tank;
};
class Bajaj : public bike
{
private:
    string make_type;

public:
    void Bajaj_get()
    {
        cout << "Enter the make type: ";
        cin >> make_type;
        cout << "Enter Milage: ";
        cin >> vehicle::milage;
        cout << "Enter Price: ";
        cin >> vehicle::price;
        cout << "Enter the number of cylinders: ";
        cin >> bike::cylinders;
        cout << "Enter the number of gears: ";
        cin >> bike::gears;
        cout << "Enter cooling type (air, liquid or oil): ";
        cin >> bike::cooling_type;
        cout << "Enter wheel types (alloys/spokes): ";
        cin >> bike::wheels;
        cout << "Enter fuel tank size (in inches): ";
        cin >> bike::fuel_tank;
    }
    void Bajaj_set()
    {
        cout << "Make type: " << make_type << endl;
        cout << "Milage of bike: " << vehicle::milage << endl;
        cout << "Price of bike: " << vehicle::price << endl;
        cout << "Number of cylinders: " << bike::cylinders << endl;
        cout << "Number of Gears: " << bike::gears << endl;
        cout << "Cooling type (air, liquid or oil): " << bike::cooling_type << endl;
        cout << "Wheel types (alloys/spokes): " << bike::wheels << endl;
        cout << "Fuel tank size: " << bike::fuel_tank << endl;
    }
};
class TVS : public bike
{
private:
    string make_type;

public:
    void TVS_get()
    {
        cout << "Enter the make type: ";
        cin >> make_type;
        cout << "Enter Milage: ";
        cin >> vehicle::milage;
        cout << "Enter Price: ";
        cin >> vehicle::price;
        cout << "Enter the number of cylinders: ";
        cin >> bike::cylinders;
        cout << "Enter the number of gears: ";
        cin >> bike::gears;
        cout << "Enter cooling type (air, liquid or oil): ";
        cin >> bike::cooling_type;
        cout << "Enter wheel types (alloys/spokes): ";
        cin >> bike::wheels;
        cout << "Enter fuel tank size (in inches): ";
        cin >> bike::fuel_tank;
    }
    void TVS_set()
    {
        cout << "Make type: " << make_type << endl;
        cout << "Milage of bike: " << vehicle::milage << endl;
        cout << "Price of bike: " << vehicle::price << endl;
        cout << "Number of cylinders: " << bike::cylinders << endl;
        cout << "Number of Gears: " << bike::gears << endl;
        cout << "Cooling type (air, liquid or oil): " << bike::cooling_type << endl;
        cout << "Wheel types (alloys/spokes): " << bike::wheels << endl;
        cout << "Fuel tank size: " << bike::fuel_tank << endl;
    }
};
int main()
{
    // ------------------------------------------------
    Audi obj1;
    cout << "\t\n (AUDI information) " << endl;
    obj1.get_Audi();
    cout << "\t\n ----- AUDI -------" << endl;
    obj1.set_Audi();
    // ------------------------------------------------

    // ------------------------------------------------
    Ford obj2;
    cout << "\t\n (FORD information) " << endl;
    obj2.get_Ford();
    cout << "\t\n ----- FORD -------" << endl;
    obj2.set_Ford();
    // ------------------------------------------------

    // ------------------------------------------------
    Bajaj obj3;
    cout << "\t\n (BAJAJ information) " << endl;
    obj3.Bajaj_get();
    cout << "\t\n ----- BAJAJ -------" << endl;
    obj3.Bajaj_set();
    // ------------------------------------------------

    // ------------------------------------------------
    TVS obj4;
    cout << "\t\n TVS information) " << endl;
    obj4.TVS_get();
    cout << "\t\n ----- TVS -------" << endl;
    obj4.TVS_set();
    // ------------------------------------------------
}