#include <iostream>
using namespace std;

class DrawAPI
{
public:
	~DrawAPI()
	{
		cout << "DrawAPI Deleted" << endl;
	}
	virtual void Draw() = 0;
};

class DrawImpl : public DrawAPI
{
public:
	~DrawImpl()
	{
		cout << "DrawImpl Deleted" << endl;
	}
	void Draw() 
	{
		cout << "Draw Impl" << endl; 
	}
};

class Character
{
public:
	~Character()
	{
		cout << "Character Deleted" << endl;
	}
	virtual void Draw() = 0;
};

class Player : public Character
{
public:
	Player(DrawAPI* api) 
	{ 
		this->api = api; 
	}
	~Player() 
	{
		//delete api;
	}
	void Draw()
	{
		api->Draw();
	}
private:
	DrawAPI* api;
};


void func() 
{
	DrawAPI* api = new DrawImpl();
	Character* character = new Player(api);
	character->Draw();

	delete api;
	delete character;
}

int main(void)
{
	func();
	system("PAUSE");
}