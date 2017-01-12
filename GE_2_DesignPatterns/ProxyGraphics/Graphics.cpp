#include <iostream>
#include "Graphics.h"

using namespace std;

Graphic::Graphic() 
{

}

Graphic::~Graphic() 
{
	cout << "Graphic Deleted" << endl;
}

void Graphic::Draw()
{
	cout << "Drawing Graphic Object" << endl;
}
