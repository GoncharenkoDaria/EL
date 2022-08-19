// convert . cpp - - преобразует стоуны в фунты
#include <iostream>
double stonetolb ( double ); // прототип функции
int main () 
{ 
using namespace std; 
double stone; 
cout << "Введите вес в стоунах: "; 
cin >> stone; 
double pounds = stonetolb (stone ); 
cout << stone << " стоунов = "; 
cout << pounds << " фунтов. " << endl ; 
return 0; }
double stonetolb (double s) 
{ 
return 14 * s;
    }
