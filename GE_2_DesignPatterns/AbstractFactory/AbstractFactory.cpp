#include <iostream>
#include <vector>
using namespace std;

class Character
{
public:
	Character() {}
	virtual ~Character() 
	{
		cout << "Delete Character" << endl;
	}
	virtual void draw() = 0;
};

class Player : public Character 
{
public:
	~Player()
	{
		cout << "Delete Player" << endl;
	}
	void draw() 
	{
		cout << "Draw Player" << endl;
	}
};

class Boss : public Character 
{
public:
	~Boss()
	{
		cout << "Delete Boss" << endl;
	}
	void draw()
	{
		cout << "Draw Boss" << endl;
	}
};

class Factory 
{
public:
	virtual Character * CreatePlayer() = 0;
	virtual Character * CreateOpponents() = 0;
};

class CharacterFactory : public Factory 
{
public: 
	Character * CreatePlayer() 
	{
		return new Player;
	}

	Character * CreateOpponents() 
	{
		return new Boss;
	}
};

void func() 
{
	Factory * factory = new CharacterFactory;
	vector<Character *> characters;
	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (size_t i = 0; i < characters.size(); i++)
	{
		characters[i]->draw();
	}

	delete factory;

	for (size_t i = 0; i < characters.size(); i++)
	{
		delete characters[i];
	}

}

int main() 
{
	func();

	system("PAUSE");
}