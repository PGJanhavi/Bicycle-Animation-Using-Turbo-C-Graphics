
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<doc.h>	
void main()
{
    clrscr();
    int gd=DETECT,gm,i,a;
    initgraph(&gd,&gm,"a\\TURBOC3\\BGI");
    
    for(i=0;i<6000;i++)
    {
        //cycle//
        line(50,405,100,405);
        line(75,375,125,375);
        line(50,405,125,375);
        line(100,405,125,375);
        line(150,405,100,345);
        line(75,375,75,370);
        line(70,375,80,370);
    
    //CYCLE//
    
        line(50+i,405,100+i,405);
        line(75+i,375,125+i,375);
        line(50+i,405,125+i,375);
        line(100+i,405,125+i,375);
        line(150+i,405,100+i,345);
        line(75+i,375,75+i,370);
        line(70+i,375,80+i,370);
        
        //WHEEL//
        circle(150+i,405,30);
        circle(50+i,405,30);
        
        //ROAD//
        line(0,436,getmaxx(),436);
        
         //STONE//
        rectangle(getmaxx()-i,436,650-i,431);
        
        delay(10);
        cleardevice();
    
}
getch();
closegraph();
}
