#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
  // TODO: Create a program that computes the restaurant bill.
  double cost;
  double tip;
  double tip_percentage;
  double tax;

  cout<<"Input meal cost: ";
  cin>>cost;
  cout<<"Input tip percentage: ";
  cin>> tip_percentage;

  tax = 0.075 * cost;
  tip = (tip_percentage/100)*cost;

  cout<<"Restaurant Bill"<<endl;
  cout<<"===================="<<endl;
  cout<<"Subtotal: $"<<cost<<endl;
  cout<<"Taxes: $"<<tax<<endl;
  cout<<"Tip: $"<<tip<<endl;
  cout<<"===================="<<endl;
  cout<<"Total: $"<<cost+tax+tip;
    
  return 0;
}
