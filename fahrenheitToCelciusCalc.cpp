#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double farenheitTemp, celsiusTemp;

    cout<<"Enter a Farenheit Temperature" << endl;
    cin >> farenheitTemp;
    celsiusTemp = ((farenheitTemp-32)*5)/9;
    cout << "The Celcius Tempature is: " <<celsiusTemp;

    return 0;
}
