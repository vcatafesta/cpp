#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>


using namespace std;
enum dias {Dom=1, Seg, Ter, Qua, Qui, Sex, Sab};
#define true	1
#define false	0

class TYouTube {
public:
   void SetNome(string x) {
      nome = x;
   }

   string GetNome() {
      return nome;
   }

   void imprimir() {
      cout << "Ferrari" << endl;
   }

   void pause() {
      getch();
   }

private:
   string nome;
};

class Computer {
public:
   Computer();
   ~Computer();
   void setspeed(int p);
   int readspeed();

protected:
   int processorspeed;
};

Computer::Computer()
{
   processorspeed = 0;
}

Computer::~Computer()
{
}

void Computer::setspeed(int p)
{
   processorspeed = p;
}
int Computer::readspeed()
{
   return processorspeed;
}

int main()
{
   TYouTube tube;
   Computer compute;
   int speed;

   compute.setspeed(1);
   switch(speed = compute.readspeed()) {
   case 1:
      cout << compute.readspeed() << endl;
      tube.SetNome("Vilmar, o gatinho");
      cout << tube.GetNome() << endl;
      tube.imprimir();
      tube.pause();
      break;
   case 2:
      break;
   }

}

