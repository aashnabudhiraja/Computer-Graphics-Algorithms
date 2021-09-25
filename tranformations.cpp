#include<graphics.h>
#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

void translate(int x0,int y0,int x1,int y1);
void scale(int x0,int y0,int x1,int y1);
void rotate(int x0,int y0,int x1,int y1);

int main()
{
int gd=DETECT,gm,ch,exitp=0;
initgraph(&gd,&gm,NULL);

int x0,x1,y0,y1;
//FILE *ip;
//ip=fopen("2Dip.txt","r");
//fscanf(ip,"%d %d %d %d",&x0,&y0,&x1,&y1);
x0=100;
x1=200;
y0=100;
y1=300;
rectangle(x0,y0,x1,y1);

translate(x0,y0,x1,y1);
scale(x0,y0,x1,y1);
rotate(x0,y0,x1,y1);

getch();
closegraph();
return 0;
}

void translate(int x0,int y0,int x1,int y1)
{
 /*int x0,x1,y0,y1;
 FILE *op,*ip1,*ip2;
 ip1=fopen("2Dip.txt","r");
 fscanf(ip1,"%d %d %d %d",&x0,&y0,&x1,&y1);
 setcolor(1);
 fclose(ip1);*/
 int tx,ty;
 /*ip2=fopen("2Dtransip.txt","r");
 fscanf(ip2,"%d %d",&tx,&ty);
 fclose(ip2);
 op=fopen("2Dop.txt","a+");*/
 tx=50;
 ty=10;
 rectangle(x0+tx,y0+ty,x1+tx,y1+ty);
 outtextxy((x0+tx+20),(y0+ty+20),(char*)"Translation");
 /*fprintf(op,"\nTranslation:\n");
 fprintf(op,"%d %d %d %d",x0+tx,y0+ty,x1+tx,y1+ty);
 fclose(op);*/
}

void scale(int x0,int y0,int x1,int y1)
{
 /*int x0,x1,y0,y1;
 FILE *op,*ip1,*ip2;
 int sx,sy;
 setcolor(2);
 ip1=fopen("2Dip.txt","r");
 fscanf(ip1,"%d %d %d %d",&x0,&y0,&x1,&y1);
 fclose(ip1);
 ip2=fopen("scaleip.txt","r");
 fscanf(ip2,"%d %d",&sx,&sy);
 op=fopen("2Dop.txt","a+");
 fclose(ip2);*/
 int sx=2;
 int sy=2;
 outtextxy(x0*sx+20,y0*sy+20,(char*)"Scaling");
 rectangle(x0*sx,y0*sy,x1*sx,y1*sy);
 /*fprintf(op,"\nSclaing:\n");
 fprintf(op,"%d %d %d %d",x0*sx,y0*sy,x1*sx,y1*sy);
 fclose(op);*/
}

void rotate(int x0,int y0,int x1,int y1)
{
 /*setcolor(3);
 FILE *op,*ip1,*ip2;*/
 float theta;
 //int x0,x1,x2,x3,x4;
 //int y0,y1,y2,y3,y4;
 int ax1,ax2,ax3,ax4,ay1,ay2,ay3,ay4;
 //int refx,refy;
 /*ip1=fopen("2Dip.txt","r");
 fscanf(ip1,"%d %d %d %d",&x0,&y0,&x1,&y1);
 fclose(ip1);
 ip2=fopen("Rotip.txt","r");
 fscanf(ip2,"%f",theta);
 fclose(ip2);
 op=fopen("2Dop.txt","a+");*/
 theta=theta*(3.14/180);
 //fprintf(op,"\nRotation:\n");

 int refx=100;
 int refy=100;

 ax1=refy+(x0-refx)*cos(theta)-(y1-refy)*sin(theta);
 ay1=refy+(x0-refx)*sin(theta)+(y1-refy)*cos(theta);

 ax2=refy+(x1-refx)*cos(theta)-(y1-refy)*sin(theta);
 ay2=refy+(x1-refx)*sin(theta)+(y1-refy)*cos(theta);

 ax3=refy+(x1-refx)*cos(theta)-(y0-refy)*sin(theta);
 ay3=refy+(x1-refx)*sin(theta)+(y0-refy)*cos(theta);

 ax4=refy+(x0-refx)*cos(theta)-(y0-refy)*sin(theta);
 ay4=refy+(x0-refx)*sin(theta)+(y0-refy)*cos(theta);


 line(ax1,ay1,ax2,ay2);
 //fprintf(op,"%d %d %d %d\n",ax1,ay1,ax2,ay2);

 line(ax2,ay2,ax3,ay3);
 //fprintf(op,"%d %d %d %d\n",ax2,ay2,ax3,ay3);

 line(ax3,ay3,ax4,ay4);
 //fprintf(op,"%d %d %d %d\n",ax3,ay3,ax4,ay4);

 line(ax4,ay4,ax1,ay1);
 //fprintf(op,"%d %d %d %d\n",ax4,ay4,ax1,ay1);


 //fclose(op);
 outtextxy(ax1+20,ay1+20,(char*)"Rotation ");

}
