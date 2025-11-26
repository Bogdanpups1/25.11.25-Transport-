#include<iostream>
using namespace std;

class Transport {
protected:
    string name;
    int year;
    int maxSpeed;
    int weight;
    int passenger;
public:
    Transport() {}
    Transport(string n, int y, int mS, int w, int p)
    {
        name = n;
        year = y;
        maxSpeed = mS;
        weight = w;
        passenger = p;
    }

    void Input()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Year: ";
        cin >> year;
        cout << "Max speed: ";
        cin >> maxSpeed;
        cout << "Transport weight: ";
        cin >> weight;
        cout << "Passenger amount: ";
        cin >> passenger;
    }

    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Max speed: " << maxSpeed << endl;
        cout << "Transport weight: " << weight << endl;
        cout << "Passenger amount: " << passenger << endl;
    }

    string GetName()
    {
        return name;
    };

    int GetYear()
    {
        return year;
    };

    int GetMaxSpeed()
    {
        return maxSpeed;
    };

    int GetWeight()
    {
        return weight;
    };

    int GetPassenger()
    {
        return passenger;
    };

    void SetYear(int y)
    {
        if (y >= 1885) year = y;
    }

    void SetName(string n)
    {
        name = n;
    }

    void SetMaxSpeed(int m)
    {
        if (m > 0) maxSpeed = m;
    }

    void SetWeight(int w)
    {
        if (w > 0) weight = w;
    }

    void SetPassengers(int p)
    {
        if (p > 0) passenger = p;
    }
};


//======================================================================================


class Ground : public Transport
{
protected:
    string wheel;
public:
    Ground(){}
    Ground(string w)
    {
        wheel = w;
    }

    void Input()
    {
        cout << "It have wheel?: ";
        cin >> wheel;
    }

    void Print()
    {
        Transport::Print();
        cout << "It have wheel?: " << endl;
    }

    string GetWheel()
    {
        return wheel;
    }

    string SetWheel(string w)
    {
        wheel = w;
    }
};

class Car : public Ground
{
protected:
    string color;
public:
    Car() {}
    Car(string c)
    {
        color = c;
    }

    void Input()
    {
		Ground::Input();
        cout << "Car color?: ";
        cin >> color;
    }

    void Print()
    {
        cout << "=================Car=================" << endl;
		Ground::Print();
		cout << "Car color?: " << endl;
        cout << "=====================================" << endl;

    }

    string GetColor()
    {
        return color;
    }

    string SetColor(string c)
    {
        color = c;
    }
};

class Train : public Ground
{
protected:
    int amountOfCarriage;
public:
    Train() {}
    Train(int aOC)
    {
        amountOfCarriage = aOC;
    }

    void Input()
    {
        Ground::Input();
        cout << "Amount of carriage?: ";
        cin >> amountOfCarriage;
    }

    void Print()
    {
        cout << "=================Train=================" << endl;
        Ground::Print();
        cout << "Amount of carriage: " << endl;
        cout << "=======================================" << endl;

    }

    int GetAmountOfCarriage()
    {
        return amountOfCarriage;
    };

    void SetAmountOfCarriage(int aOC)
    {
        if (aOC >= 1) amountOfCarriage = aOC;
    }
};

class Truck : public Ground
{
protected:
    double maxWeight;
public:
    Truck() {}
    Truck(int mW)
    {
        maxWeight = mW;
    }

    void Input()
    {
        Ground::Input();
        cout << "How much truck can drive?: ";
        cin >> maxWeight;
    }

    void Print()
    {
        cout << "=================Truck=================" << endl;
        Ground::Print();
        cout << "It can drive: " << endl;
        cout << "=======================================" << endl;

    }

    int GetMaxWeight()
    {
        return maxWeight;
    };

    void SetMaxWeight(int mW)
    {
        if (mW >= 5) maxWeight = mW;
    }
};

//======================================================================================


class Water : public Transport
{
protected:
    string swim;
public:
    Water() {}
    Water(string s)
    {
        swim = s;
    }

    void Input()
    {
        cout << "It can swim?: ";
        cin >> swim;
    }

    void Print()
    {
        cout << "It can swim?: " << endl;
    }

    string GetSwim()
    {
        return swim;
    }

    string SetSwim(string s)
    {
        swim = s;
    }
};

class Tanker : public Water
{
protected:
    double maxWeight;
public:
    Tanker() {}
    Tanker(double mW)
    {
        maxWeight = mW;
    }

    void Input()
    {
        Water::Input();
        cout << "Max weight?: ";
        cin >> maxWeight;
    }

    void Print()
    {
        cout << "=================Tanker=================" << endl;
        Water::Print();
        cout << "It can carry: " << endl;
        cout << "========================================" << endl;

    }

    int GetMaxWeight()
    {
        return maxWeight;
    };

    void SetMaxWeight(double mW)
    {
        if (mW >= 500) maxWeight = mW;
    }
};

class Ship : public Water
{
protected:
    int amountOfEngine;
public:
    Ship() {}
    Ship(int aOE)
    {
        amountOfEngine = aOE;
    }

    void Input()
    {
        Water::Input();
        cout << "Amount of engine?: ";
        cin >> amountOfEngine;
    }

    void Print()
    {
        cout << "=================Tanker=================" << endl;
        Water::Print();
        cout << "Amount of engine: " << endl;
        cout << "========================================" << endl;

    }

    int GetAmountOfEngine()
    {
        return amountOfEngine;
    };

    void SetAmountOfEngine(int aOE)
    {
        if (aOE >= 1) amountOfEngine = aOE;
    }
};

class MotorShip : public Water
{
protected:
    int amountOfPipe;
public:
    MotorShip() {}
    MotorShip(int aOP)
    {
        amountOfPipe = aOP;
    }

    void Input()
    {
        Water::Input();
        cout << "Amount of engine?: ";
        cin >> amountOfPipe;
    }

    void Print()
    {
        cout << "===============MotorShip================" << endl;
        Water::Print();
        cout << "Amount of pipe: " << endl;
        cout << "========================================" << endl;

    }

    int GetAmountOfPipe()
    {
        return amountOfPipe;
    };

    void SetAmountOfPipe(int aOP)
    {
        if (aOP >= 1) amountOfPipe = aOP;
    }
};

//======================================================================================


class Air : public Transport
{
protected:
    string wing;
public:
    Air() {}
    Air(string w)
    {
        wing = w;
    }

    void Input()
    {
        cout << "It have wing?: ";
        cin >> wing;
    }

    void Print()
    {
        cout << "It have wing?: " << endl;
    }

    string GetWing ()
    {
        return wing;
    }

    string SetWing(string w)
    {
        wing = w;
    }
};


class Plane : public Air
{
protected:
    double wingLenght;
public:
    Plane() {}
    Plane(double wL)
    {
        wingLenght = wL;
    }

    void Input()
    {
        Air::Input();
        cout << "Wing Lenght?: ";
        cin >> wingLenght;
    }

    void Print()
    {
        cout << "=================Plane==================" << endl;
        Air::Print();
        cout << "Wing Lenght: " << endl;
        cout << "========================================" << endl;

    }

    int GetWingLenght()
    {
        return wingLenght;
    };

    void SetWingLenght(double wL)
    {
        if (wL >= 25) wingLenght = wL;
    }
};

class Helicopter : public Air
{
protected:
    int amountOfPropellers;
public:
    Helicopter() {}
    Helicopter(int wL)
    {
        amountOfPropellers = wL;
    }

    void Input()
    {
        Air::Input();
        cout << "Amount of propellers?: ";
        cin >> amountOfPropellers;
    }

    void Print()
    {
        cout << "==============Helicopter================" << endl;
        Air::Print();
        cout << "Amount of propellers: " << endl;
        cout << "========================================" << endl;

    }

    int GetAmountOfPropellers()
    {
        return amountOfPropellers;
    };

    void SetAmountOfPropellers(int aOP)
    {
        if (aOP >= 1) amountOfPropellers = aOP;
    }
};

class Airship : public Air
{
protected:
    int balloonLenght;
public:
    Airship() {}
    Airship(int bL)
    {
        balloonLenght = bL;
    }

    void Input()
    {
        Air::Input();
        cout << "Balloon lenght?: ";
        cin >> balloonLenght;
    }

    void Print()
    {
        cout << "================Airship=================" << endl;
        Air::Print();
        cout << "Balloon lenght: " << endl;
        cout << "========================================" << endl;

    }

    int GetBalloonLenght()
    {
        return balloonLenght;
    };

    void SetBalloonLenght(int bL)
    {
        if (bL >= 100) balloonLenght = bL;
    }
};


//======================================================================================
int main()
{
    Transport* transport = nullptr;

    int choice = 0;
    cout << "1. Car" << endl;
    cout << "2. Train" << endl;
    cout << "3. Truck" << endl;
    cout << "4. Tanker" << endl;
    cout << "5. Ship" << endl;
    cout << "6. Motor Ship" << endl;
    cout << "7. Plane" << endl;
    cout << "8. Helicopter" << endl;
    cout << "9. Airship" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        transport = new Car;
        transport->Input();
        break;
    case 2:
        transport = new Train;
        transport->Input();
        break;
    case 3:
        transport = new Truck;
        transport->Input();
        break;
    case 4:
        transport = new Tanker;
        transport->Input();
        break;
    case 5:
        transport = new Ship;
        transport->Input();
        break;
    case 6:
        transport = new MotorShip;
        transport->Input();
        break;
    case 7:
        transport = new Plane;
        transport->Input();
        break;
    case 8:
        transport = new Helicopter;
        transport->Input();
        break;
    case 9:
        transport = new Airship;
        transport->Input();
        break;
    default:
        cout << "Nuh huh!" << endl;
        break;
    }
    

	transport->Print();
    delete transport;
	return 0;
};
