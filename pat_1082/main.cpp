#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int max= -1,min = 10000;
    int n,a,b,tmp,s;
    int max_num,min_num;

    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>tmp>>a>>b;
        s = a*a + b*b;
        if (s > max) {max_num = tmp; max = s;}
        if (s < min) {min_num = tmp; min = s;}
    }
    cout << setw(4) << setfill('0')<< min_num << ' ';
    cout<< setw(4) << setfill('0')<< max_num<<endl ;
    return 0;
}
