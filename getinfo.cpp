// Ввод и вывод
#include <iostream>
using namespace std;
int main () 
{
int potatoes;
cout <<"Сколько у тебя картошек?"<<endl;
cin>>potatoes; // Ввод
cout<<"Держи еще эти две. ";
potatoes=potatoes+2;
cout<<"Теперь у тебя "<< potatoes<<" клубней."<<endl;
return 0;
}