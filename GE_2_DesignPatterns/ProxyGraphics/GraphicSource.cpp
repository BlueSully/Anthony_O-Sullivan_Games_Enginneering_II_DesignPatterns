#include <iostream>
#include "GraphicProxy.h"

using namespace std;

void func() 
{
	GraphicProxy gp;
	gp.Draw();
}

int main(void)
{
	func();
	system("PAUSE");
}