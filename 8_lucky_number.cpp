#include<iostream>
using namespace std;
bool lucky(int n)
{
  static int counter=2;
  if(counter>n)
  return 1;
  if(n%counter==0)
  return 0;

  int np=n;
  np=np-np/counter;
  counter++;
  lucky(np);

}

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<lucky(n);
  return 0;
}