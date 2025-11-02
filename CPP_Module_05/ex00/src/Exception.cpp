// Note: This file is just for testing purposes!!!!!


#include <iostream>
#include <string>

class Printer {
private:
	std::string _name;
	int _availablePaper;
public:
	// Printer(std::string name, int paper)
	// {
	// 	_name = name;
	// 	_availablePaper = paper;
	// }
	Printer();
	Printer(const std::string &name, int paper);
	~Printer();

	void Print(const std::string &txtDoc);
};


Printer::Printer() : _name("random"), _availablePaper(10)
{
	_name = "Unknown";
	_availablePaper = 10;

	std::cout << "DefaultPrinter " << _name << " has been constructed with "
	<< _availablePaper << " pages! " << std::endl;
}

Printer::Printer(const std::string &name, int paper) : _name(name), _availablePaper(paper)
{
	_name = name;
	_availablePaper = paper;
	std::cout << "Printer " << _name << " has been constructed with "
	<< _availablePaper << " pages!" << std::endl;
}

Printer::~Printer()
{
	std::cout << "Printer has been destroyed!" << std::endl;
}

void Printer::Print(const std::string &txtDoc)
{
	int requiredPaper = txtDoc.length() / 10;

	if (_availablePaper < requiredPaper)
	{
		throw ("No Paper");
	}
	std::cout << "Printing..." << txtDoc << std::endl;

	_availablePaper -= requiredPaper;
}

int main ()
{

	Printer DefaultPrinter;
	Printer myPrinter("Hp Deskjet 2810", 10);

	try {
		myPrinter.Print("Hi my name is Raja, And i am a Software Developer");
		myPrinter.Print("Hi my name is Raja, And i am a Software Developer");
		myPrinter.Print("Hi my name is Raja, And i am a Software Developer");
	}

	catch (const char * txtException)
	{
		std::cout << "Exception:  " << txtException << std::endl;
	}
}