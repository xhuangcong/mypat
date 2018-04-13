#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct student{
    string name[20];
    int program ;
    int mid ;
    int final ;
};

struct student2{
    string name[20];
    int program ;
    int mid ;
    int final ;
    double g2;
};

int main()
{
    int a,b,c,score;
    double g;
    int j =0,m=0;
    string x[20];
    student p[10000];
    cin>>a >>b >>c;
    for (int i=0; i<a; ++i){
        cin>>x>>score;
        if (score >= 200) {
            p[j].name = x;
            p[j].program = score;
            p[j].mid = -1;
            p[j].final = -1;
            j += 1;}
    }
    for (int i=0; i<b; ++i){
        cin>>x>>score;
        for (int k=0; k<j; ++j){
            if (x == p[k].name) p[k].mid = score;
        }
    }
    for (int i=0; i<c; ++i){
        cin>>x>>score;
        for (int k=0; k<j; ++j){
            if (x == p[k].name) p[k].final = score;
        }
    }

    student2 *q;
    q = new student2[j];

    for (int i=0; i<j; ++i){
        if (p[i].mid > p[i].final && p[i].final != -1 ) g = round(p[i].final*0.6 + p[i].mid*0.4);
        else if (p[i].mid <= p[i].final) g = p[i].final;
        else g = -1;
        if (g >= 60) {
           q[m].name = p[i].name;
           q[m].program = p[i].program;
           q[m].mid = p[i].mid;
           q[m].g2 = g;
           m += 1;
        }
    }

    for (int i=0; i<m; ++i){
        cout<<q[m].name<<' '<<q[m].program<<' '<<q[m].mid<<' '<<q[m].final<<' '<<q[m].g2<<endl;
    }
    return 0;
}
