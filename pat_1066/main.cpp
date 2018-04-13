#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x,y,m,n;
    char ch;
    cin>>m >>n >>x >>y >>ch;
    int **z = new int*[m]; //开辟行
    for(int i = 0; i < m; i++)
        z[i] = new int[n]; //开辟列

    for (int i=0; i<m; ++i){
       for (int j=0; j<n; ++j){
           cin>>z[i][j];}
    }

    for (int i=0; i<m; ++i){
       for (int j=0; j<n-1; ++j){
           if (z[i][j] < x || z[i][j] > y) cout<<setw(3)<<setfill(ch)<<z[i][j]<<" ";
           else cout<<setw(3)<<setfill(ch)<<ch<<" ";
       }
       if (z[i][n-1] < x || z[i][n-1] > y) cout<<setw(3)<<setfill(ch)<<z[i][n-1]<<endl;
       else cout<<setw(3)<<setfill(ch)<<ch<<endl;
    }

    for(int i = 0; i < m; i++)
        delete[] z[i];
    delete[] z;

    return 0;
}
