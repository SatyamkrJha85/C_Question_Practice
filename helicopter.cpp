#include<conio.h>

#include<dos.h>

//Animation
void Helicopter();
void Letters();
void Go();
void Close();

 int main()
{
  
  int DETECT, gm;
  initgraph(&gd, &gm,"C://TurboC3/BGI");
  Letters();
  Go();
  Helicopter();
  Close();
  getch();
  closegraph();
}

 // all the declear function not used in optics
 
