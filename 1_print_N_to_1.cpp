#include<iostream>
using namespace std;
int printNto1(int n)
{
  if(n==0)
  return 0;
  cout<<n<<" ";
  printNto1(n-1);
}

int print1toN(int n)
{
  if (n==0)
  return 0;
  print1toN(n-1);
  cout<<n<<" ";
}

int main()
{
  int n;
  cout<<"enter the number: ";
  cin>>n;
  printNto1(n);
  cout<<endl;
  print1toN(n);
  return 0;
}