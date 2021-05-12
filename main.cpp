#include <iostream>

using namespace std;

int main()
{
    double raio, volume, quatro=4, tres=3;
    cin >> raio;
    volume = (quatro/tres) * 3.14159 * ((raio*raio)*raio);
    cout.precision(3);
    cout << fixed << "VOLUME = " << volume <<endl;
    return 0;
}
