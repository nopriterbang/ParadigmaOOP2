#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:

    //method untuk mengisi nilai
    //privated member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    
};

int main(){
    AbstraksiKlas ak;
    ak.
}