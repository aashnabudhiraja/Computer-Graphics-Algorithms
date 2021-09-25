#include<iostream>
#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;

void line_eq(int x1, int y1, int x2, int y2)
{
    float m=abs(y2-y1)/abs(x2-x1);
    float c=y1-(m*x1);
    for(int x=x1;x<=x2;x++)
    {
        int y=m*x+c;
        putpixel(x,y,WHITE);
    }
}

int main()
{
    int x1, y1, x2, y2;
    cout<<"Enter the values:\n";
    cout<<"x1:  ";
    cin>>x1;
    cout<<"y1:  ";
    cin>>y1;
    cout<<"x2:  ";
    cin>>x2;
    cout<<"y2:  ";
    cin>>y2;
    initwindow(500, 500, "dda");
    line_eq(x1, y1, x2, y2);
    getch();
}
