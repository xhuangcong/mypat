#include <iostream>
using namespace std;

int num = 0;

int process(int n)
{
  if (n == 1) return 1;
  else if (n%2 == 0) {process(n/2); num += 1;}
  else if (n%2 == 1) {process((3*n+1)/2); num += 1;}
}

int main()
{
  int n;
  cin >> n;
  process(n);
  cout << num;
}
