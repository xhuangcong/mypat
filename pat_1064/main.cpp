#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n,f_num;
    set<int> s;
    int a, b, c;
    int *p,*q;
    p = new int[n];
    q = new int[n];
    cin>>n;
    for (int i=0; i<n; ++i){
       cin >> p[i];
    }

    for (int i=0; i<n; ++i){
        a = p[i]/100;
        b = (p[i]%100)/10;
        c = p[i]%10;
        f_num = a+b+c;
        p[i] = f_num;
        s.insert(f_num);
    }
    sort(p,p+n);

    b = 0;
    q[0] = p[0];
    a = p[0];
    for (int i=1; i<n; ++i){
        if (p[i] != p[i-1]){
            b +=1;
            q[b] = p[i];
        }
    }
    cout<<b+1<<endl;
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        if(it != s.begin()) cout<<' ';
        cout<<*it;
    }
    return 0;
}
