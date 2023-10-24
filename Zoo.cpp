#include <iostream>
#include <string>
using namespace std;

enum AnimalType {
    FISH,
    BIRD,
    MAMMAL
};

struct Animal {
    AnimalType type;

    void move(){
        switch(type){
            case FISH:
                cout << "silently swimming in the dark deep of the ocean" << endl;
                break;
            case BIRD:
                cout << "flying high above the ground" << endl;
                break;
            case MAMMAL:
                cout << "just walking" << endl;
                break;
            default:
                cout << "*This animal can't do anything, maybe it's dead*" << endl;
                break;
        }
    }

    void sound(){
        switch (type) {
            case FISH:
                cout << "and makes clicking sound underwater" << endl;
                break;
            case BIRD:
                cout << "and chirps" << endl;
                break;
            case MAMMAL:
                cout << "and makes a mammal sound" << endl;
                break;
            default:
                cout << "This animal can't make any sound, maybe it's dead" << endl;
                break;
        }
    }
};

int main() {
    Animal whale;
    Animal tiger;
    Animal eagle;

    whale.type = FISH;
    tiger.type = MAMMAL;
    eagle.type = BIRD;

    cout << "Animals in the zoo moves and sounds like this:" << endl << endl;
    cout << "Whale is ";
    whale.move();
    whale.sound();
    cout << endl;

    cout << "Tiger is ";
    tiger.move();
    tiger.sound();
    cout << endl;

    cout << "Eagle is ";
    eagle.move();
    eagle.sound();

    return 0;

}

