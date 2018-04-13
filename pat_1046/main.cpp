#include <iostream>

using namespace std;

int main()
{
    int n;
    int x[4];
    int a = 0, b = 0;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> x[0];cin >> x[1];cin >> x[2];cin >> x[3];
        if ((x[1] == x[0] + x[2])&&(x[3] != x[0] + x[2])) b += 1;
        else if ((x[1] != x[0] + x[2])&&(x[3] == x[0] + x[2])) a += 1;
    }
    cout << a <<" "<< b;
    return 0;
}
