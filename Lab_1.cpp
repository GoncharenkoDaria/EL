// Lab_1_Goncharenko.

#include <iostream>
#include <cmath>
using namespace std;
double myfunc (double); 
double  x_1,x_2,x_3,y_1,y_2,y_3,x_4,y_4, a, b, c, p, s, m,k1,k2,k3, func_k,func_b;
double func_y (double x, double func_k, double func_b)
{ 
using namespace std;
return func_k*x+func_b;
}

int main () 
{
    int x1,x2,x3,y1,y2,y3,x4,y4;
  cout << ("First three points for the triangle, then free one.")<<endl;
  cout<< ("Сoordinates of point one, x then y: ")<<endl ;
  cin >> x1>> y1;
  cout<< ("Сoordinates of point two, x then y: ")<<endl ;
  cin >>x2>>y2;
  cout<< ("Сoordinates of point three, x then y: ")<<endl ;
  cin >> x3>>y3;
  cout<< ("Сoordinates of point four, x then y: ") <<endl;
  cin >> x4>>y4;
  
  x_1=x1;
  x_2=x2;
  x_3=x3;
  x_4=x4;
  y_1=y1;
  y_2=y2;
  y_3=y3;
  y_4=y4;
  a=sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
  b=sqrt(pow(x_3-x_2,2)+pow(y_3-y_2,2));
  c=sqrt(pow(x_1-x_3,2)+pow(y_1-y_3,2));
  
  k1=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
  k2=(pow(b,2)+pow(a,2)-pow(c,2))/(2*b*a);
  k3=(pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
    m=0;
   if (x_2>x_1)
   {
     func_k= (y_2-y_1)/(x_2-x_1);
     func_b=y_1-x_1*(func_k);
   }
   else
      {
      func_k= (y_1-y_2)/(x_1-x_2);
      func_b=y_1-x_1*(func_k);
      }
if (((func_y(x_3,func_k, func_b)>y_3) and  (func_y(x_4, func_k, func_b)>y_4)) or ((func_y(x_3, func_k, func_b)<y_3) and  (func_y(x_4, func_k, func_b)<y_4)))
 {
  m=m+1;}
  if (x_3>x_1) {
  
  func_k= (y_3-y_1)/(x_3-x_1);
  func_b=y_1-x_1*(func_k);
  }
  else
  {
  func_k= (y_1-y_3)/(x_1-x_3);
  func_b=y_1-x_1*(func_k);
  }
  if (((func_y(x_2, func_k, func_b)>y_2) and  (func_y(x_4, func_k, func_b)>y_4)) or ((func_y(x_2, func_k, func_b)<y_2) and  (func_y(x_4, func_k, func_b)<y_4)))
  {
  m=m+1;}

   if (x_3>x_2) {
   
  func_k= (y_3-y_2)/(x_3-x_2);
  func_b=y_2-x_2*(func_k);
   }
  else{
  func_k= (y_2-y_3)/(x_2-x_3);
  func_b=y_2-x_2*(func_k);}
  if (((func_y(x_1, func_k, func_b)>y_1) and  (func_y(x_4, func_k, func_b)>y_4)) or ((func_y(x_1, func_k, func_b)<y_1) and  (func_y(x_4, func_k, func_b)<y_4)))
  {
  m=m+1;}
   if (m=3) {
  cout<<("Point four belongs inside the triangle.");}
  else
  cout<<("Point four doesnt belong inside the triangle.");
  if ((k1<=0) or (k2<=0) or(k3<=0)) {
  cout<< ("Not Acute - angled triangle.");}
  else{
  cout<< ("Acute - angled triangle.");}
   return 0; }

