#include<iostream>
using namespace std;
int jos(int n, int k)
{
  if (n==1)
  return 0;


  return (jos(n-1, k)+k) % n;
}
/*nt joss(int n, int k)
{                                    this function is to be used 
  return jos(n, k)+1;                if the index of the circle is 
}*/                               // starting from one anad not zero
int main()
{
  int n, k;
  cout<<"Enter the number of person and value of K: ";
  cin>>n>>k;
  cout<<"Index of survivor is: "<< jos(n,k);
  return 0;
}