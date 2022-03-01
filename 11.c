#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float a,b,c;
}sistem;

void p11();
void problema(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4);

int main()
{
    p11();
    return 0;
}

void problema(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
{
    /// folosim determinantul pentru a forma sistemele
    sistem s1,s2;
    s1.a = y1 - y2;
    s1.b = x2 - x1;
    s1.c = x1*y2 - x2*y1;

    s2.a = y3 - y4;
    s2.b = x4 - x3;
    s2.c = x3*y4 - x4*y3;

    /// inmultim sistemul1 cu s2.a si sis2 cu s1.a
    ///apoi le scadem pentru a afla x

    float y = (s2.a * s1.c - s1.a * s1.c) / (s2.a * s1.b - s1.a * s2.b);
    float x = (-y * s1.b +s1.c) / s1.a;

    /// Avem punctul de intersectie a dreptelor

    printf("%d %d",x,y);
}

void p11()
{
    /// citim punctele
    float x1,x2,x3,x4,y1,y2,y3,y4;
    printf("A = ");
    scanf("%f %f",&x1,&y1);
    printf("B = ");
    scanf("%f %f",&x2,&y2);
    printf("c = ");
    scanf("%f %f",&x3,&y3);
    printf("D = ");
    scanf("%f %f",&x4,&y4);

}
