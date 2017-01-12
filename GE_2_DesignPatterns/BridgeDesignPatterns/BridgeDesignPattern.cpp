#include <iostream>
using namespace std;

class Character
{
public:
	Character() 
	{ 

	}
	~Character() 
	{
		cout << "Character Deleted" << endl;
	}
	void Print() 
	{ 
		cout << "Printing Character" << endl;
	}
};
class HandleToCharacter
{
public:
	HandleToCharacter() : character(new Character())
	{  

	}

	~HandleToCharacter()
	{
		delete character;
	}

	Character* operator->() 
	{
		return character; 
	} //overloaded ->

private:
	Character* character;
};

void func()
{
	HandleToCharacter handle;

	handle->Print();
}

int main()
{
	func();

	system("PAUSE");
}
