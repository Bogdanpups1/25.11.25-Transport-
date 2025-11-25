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

int main() 
{
    /*Transport* transport = nullptr;

    int choice = 0;
    cout << "1. Car" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        transport = new Car;
        transport->Input();
        break;
    }*/
}