#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class";
    }
};

class deriveredClass : public baseClass {
public:
    void perkenalan(){
        cout << "Halo saya Function dari derivered class";
    }
};

int main() {
    deriveredClass a;
    a.perkenalan();

    return 0;
}