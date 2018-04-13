#include <iostream>

using namespace std;

int main()
{
    char *a[80];
    int i =0;
    while (cin.get(a[i],80,' '))
        ++i;
    for (int j=i-1; j>0; --j)
        cout<<*a[j]<<' ';
    cout<<*a[0];
    cout << endl;
    return 0;
}
