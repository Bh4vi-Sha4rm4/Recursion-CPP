#include<iostream>
using namespace std;
int sumofnumbers(int n)
{
  if (n==0)
  return 0;
  return n+sumofnumbers(n-1);
}

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<"Sum of first "<<n<<" natural numbers is: "<<sumofnumbers(n);
  return 0;
}