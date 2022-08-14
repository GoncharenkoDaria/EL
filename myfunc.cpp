# include <iostream> 
void myfunc (int); // --прототип функции, тип ввода и вывода
int main () 
{

using namespace std; 
 myfunc ( 3 ); 
cout << " Сколько еще : "; 
int count ; 
cin >> count; 
myfunc ( count ) ; 
cout << " Готово ! " << endl ; 
return 0; }

void myfunc (int n) 
{ 
using namespace std; 

cout << " Мы делаем приседания " << n << " раз ." << endl ; }
