#include<iostream.h>
#include<conio.h>
class example
{
int a, b,c,d;
public:
 example()
 {
  cout<<"Please Enter the value of a & b for Multiplication "<<endl;
  cin>>a>>b;

  cout<<"A:"<<a<<endl;
  cout<<"B:"<<b<<endl;
  cout << "\nMultiplication="<<a*b<<endl;
  }
 example(int x, int y)
  {
  c = x;
  d= y;
  cout << "\n Multiplication"<<c*d<<endl;
  }
  example (example & e)
  {
  a=e.a;
  b=e.b;
  cout<<"Multiplication"<<a*b<<endl;
  }
  void display()
  {
  cout << "C:" << a << endl;
  cout <<"D:"<<b<<endl;
  }
  };

  void main()
  {
  int choice;
  clrscr();
  do
  {
  cout<<"|||||***** Program for Constructor Overloading *****|||||"<<endl;
  cout<<endl<<endl;
  cout<<" Menu"<<endl;
  cout<<" 1. Default Constructor "<<endl;
  cout<<" 2. Parameterized Constructor "<<endl;
  cout<<" 3. Copy Constructor "<<endl;
  cout<<" 4. Exit "<<endl;
  cout<<" Enter Your Choice "<<endl;
  cin>>choice;

  switch(choice)
  {
  case 1:
    example e1;
    break;
  case 2:
    example e(10, 20);
    break;
  case 3:
    e1.display();
    example e3(e1);
    break;
  case 4:
    goto Mayur;
    break;
  default:
  cout<<"Your Choice is Wrong"<<endl;
  break;
  }
  }while(choice<=4);
  Mayur:
  getch();
  }