#include<iostream>
using namespace std;
int getsum(int n)
{
  if (n==0)
  return 0;
  return n%10 + getsum(n/10);
}

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<"sum of the digits: "<<getsum(n);
  return 0;

}