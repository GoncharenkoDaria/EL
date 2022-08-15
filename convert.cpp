// convert . cpp - - преобразует стоуны в фунты
#include <iostream>
int stonetolb ( int ); // прототип функции
int main () 
{ 
using namespace std; 
int stone; 
cout << "Введите вес в стоунах: "; 
cin >> stone; 
int pounds = stonetolb (stone ); 
cout << stone << " стоунов = "; 
cout << pounds << " фунтов. " << endl ; 
return 0; }
int stonetolb (int sts) 
{ 
return 14 * sts;}