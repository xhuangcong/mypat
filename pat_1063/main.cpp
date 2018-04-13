#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n,t;
    int max = -1,a,b;
    cin >> n;
    for (int i = 0; i<n; ++i){
        cin >> a; cin >> b;
        t = a*a + b*b;
        if (t>max) max = t;
    }
    //float x;
    //x = sqrt(max);
    cout << fixed << setprecision(2)<< sqrt(max);
    return 0;
}
