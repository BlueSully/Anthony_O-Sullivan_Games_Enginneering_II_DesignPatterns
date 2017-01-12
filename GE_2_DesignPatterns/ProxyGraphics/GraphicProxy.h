#ifndef GRAPHIC_PROXY_H
#define GRAPHIC_PROXY_H
#include "Graphics.h"
#include "IGraphics.h"

class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void Draw();

private:
	Graphic* graphic;
	Graphic* getInstance(void);
};
#endif 
