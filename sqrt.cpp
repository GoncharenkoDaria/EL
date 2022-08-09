#include <iostream>
#include <cmath> // --содержит прототип функции
int main ( )
{
using namespace std;
double area;
cout << "Сколько квадратных метров в твоей комнате: " ;
cin >> area ;
double side;
side = sqrt ( area ) ;
cout <<  "Это примерно квадрат со стороной " << side
<<  " метров." << endl ;
cout <<  "Как здорово!"  << endl ;
return 0;}
