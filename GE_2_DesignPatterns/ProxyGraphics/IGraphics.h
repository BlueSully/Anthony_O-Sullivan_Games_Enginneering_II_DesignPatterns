#ifndef IGRAPHIC_H
#define IGRAPHIC_H

#include <iostream>
using namespace std;

//Common Interface
class IGraphic
{
public:
	~IGraphic() 
	{
		cout << "IGraphic Deleted" << endl;
	}

	virtual void Draw() = 0;
};

#endif
