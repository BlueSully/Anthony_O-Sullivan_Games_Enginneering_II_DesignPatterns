#ifndef GRAPHIC_H
#define GRAPHIC_H

#include "IGraphics.h"

class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void Draw();
};
#endif