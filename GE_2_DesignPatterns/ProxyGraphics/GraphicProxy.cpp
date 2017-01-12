#include <iostream>
#include "Graphics.h"
#include "GraphicProxy.h"
using namespace std;

GraphicProxy::GraphicProxy()
{
	this->graphic = 0;
}

GraphicProxy::~GraphicProxy()
{
	cout << "Proxy Deleted" << endl;

	if (graphic)
	{
		delete graphic;
		cout << "Graphic Deleted" << endl;
	}

}

Graphic* GraphicProxy::getInstance(void)
{
	if (!graphic)
		graphic = new Graphic();
	return graphic;
}

void GraphicProxy::Draw()
{
	getInstance()->Draw();
}
