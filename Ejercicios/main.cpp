#include <iostream>
using namespace std;

int funcion (int , int);


int main(int argc, char const *argv[])
{
    cout << funcion(-15, 11);
    system("pause");
    return 0;
}


int funcion (int x, int y) {
    return x / y;
}