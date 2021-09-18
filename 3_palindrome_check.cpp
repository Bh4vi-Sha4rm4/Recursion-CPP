#include<iostream>
#include<cstring>
using namespace std;
bool checkpalindrome(string &s, int start, int end)
{
  if (start==end)
  return true;

  return ((s[start]==s[end]) && 
	checkpalindrome(s, start + 1, end - 1));
}

int main()
{
  string s ;
  cout<<"Enter the string: ";
  cin>>s;
  cout<<checkpalindrome(s, 0, s.length()-1);
}