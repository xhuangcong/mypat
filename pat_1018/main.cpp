#include <iostream>

using namespace std;

int main()
{
    int n;
    int c1=0,j1=0,b1=0,c2=0,j2=0,b2=0;
    char a,b;
    int x=0, y=0, z=0;
    cin >> n;
    for (int i=0; i<n; ++i){
        cin >> a >> b;
        if (a == 'C'){
            if (b == 'C') y += 1;
            if (b == 'J') {x += 1; c1 += 1;}
            if (b == 'B') {z += 1; b2 += 1;}
        }
        else if (a == 'J'){
            if (b == 'C') {z += 1; c2 += 1;}
            if (b == 'J') {y += 1;}
            if (b == 'B') {x += 1; j1 += 1;}
        }
        else if (a == 'B'){
            if (b == 'C') {x += 1; b1 += 1;}
            if (b == 'J') {z += 1; j2 += 1;}
            if (b == 'B') {y += 1;}
        }
    }
    cout << x << " " << y << " " << z << endl;
    cout << z << " " << y << " " << x << endl;
    if (c1 < b1 && j1 < b1) cout<< 'B' <<" ";
    else if (c1 < j1 && b1 < j1) cout<< 'J' <<" ";
    else if (b1 < c1 && j1 < c1) cout<< 'C' <<" ";
    else if (c1 == j1 && c1 > b1) cout<<'C' <<" ";
    else if (c1 == b1 && c1 > j1) cout<<'B' <<" ";
    else if (b1 == j1 && b1 > c1) cout<<'B' <<" ";
    else if (c1 == b1 && c1 == j1) cout<<'B' <<" ";
    if (c2 < b2 && j2 < b2) cout<< 'B' ;
    else if (c2 < j2 && b2 < j2) cout<< 'J' ;
    else if (b2 < c2 && j2 < c2) cout<< 'C' ;
    else if (c2 == j2 && c2 > b2) cout<<'C' ;
    else if (c2 == b2 && c2 > j2) cout<<'B' ;
    else if (b2 == j2 && b2 > c2) cout<<'B' ;
    else if (c2 == b2 && c2 == j2) cout<<'B' ;
    return 0;
}
