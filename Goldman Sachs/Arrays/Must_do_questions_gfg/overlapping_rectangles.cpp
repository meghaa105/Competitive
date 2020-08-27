#include <bits/stdc++.h>
using namespace std;

struct rect
{
    int x1,y1;
    int x2,y2;
};
int overlap(rect *p1,rect *p2)
{
    if (p1->x1 < p2->x2 && p1->x2 > p2->x1 &&
    p1->y1 > p2->y2 && p1->y2 < p2->y1) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    struct rect* p1 =(struct rect*)malloc(sizeof(struct rect));
    struct rect* p2 =(struct rect*)malloc(sizeof(struct rect));
    cin >> p1->x1 >> p1->y1 >> p1->x2 >> p1->y2;
    cin >> p2->x1 >> p2->y1 >> p2->x2 >> p2->y2;
    cout <<  overlap(p1,p2);
    return 0;
}