#include<iostream>
using namespace std;

class Route {
public:
    void highway() {
        cout << "Travel through highway stops and reach its destination" << endl;
    }

    void beachroad() {
        cout << "Travel through beach road stops and reach its destination" << endl;
    }
};

class Vizagpeople : public Route {
public:
    void travel() {
        highway(); 
    }
};

class Vizianagarampeople : public Route {
public:
    void travel() {
        beachroad(); 
    }
};

int main() {
    Vizagpeople vizag;
    Vizianagarampeople vizianagaram;
    
    vizag.travel(); 
    vizianagaram.travel(); 

    return 0;
}
