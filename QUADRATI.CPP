#include<iostream.h>
#include<conio.h>
#include<math.h>

int main()
{
  clrscr();
   float a,b,c,x1,x2,d,r,i;
   cout<<"enter the coffiecient of a, b, c: \n";
   cin>>a>>b>>c;

   d = ((b*b) - (4*a*c));

   if(d>0)
   {
     x1 = (-b + sqrt(d))/(2*a);
     x2 = (-b - sqrt(d))/(2*a);
     cout<<"roots are different and real."<<endl;
     cout<<"x1: "<<x1<<endl;
     cout<<"x2: "<<x2<<endl;
   }
  else if(d==0)
  {
   cout<<"roots are same and real."<<endl;
   x1 = (-b/(2*a));
   cout<<"x1 = x2 : "<<x1<<endl;


  }
  else{
    r =(-b/(2*a));
    i = sqrt(-d)/(2*a);
    cout<<"roots are complex and different."<<endl;
    cout<<"x1 = "<< r << "+"<< i <<endl;
    cout<<"x2 = "<< r << "+"<< i <<endl;

  }
  getch();
  return 0;


}