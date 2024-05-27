#include <iostream>
using namespace std;

class seseorang{
public:

};

class lia :public seseorang{
public:
    void pesan(){
        cout << "Pesan dari lia" << endl;
    }
};

int main(){
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.seseorang::pesan();

    return 0;
}