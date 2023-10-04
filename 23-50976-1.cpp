#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    void set_values(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class Zebra : public Animal {
public:
    void describe() {
        cout << "I am a zebra named " << name << ", and I am " << age << " years old. I come from Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void describe() {
        cout << "I am a dolphin named " << name << ", and I am " << age << " years old. I come from the ocean." << endl;
    }
};

int main() {
    Zebra z;
    Dolphin d;

    z.set_values("Stripes", 5);
    d.set_values("Flipper", 10);

    z.describe();
    d.describe();

    return 0;
}
