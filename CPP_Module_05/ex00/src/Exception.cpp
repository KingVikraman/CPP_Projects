// Note: This file is just for testing purposes!!!!!


#include <iostream>
#include <string>

class Printer {
private:
	const std::string privateName;
	int privateAvailablePaper;
public:
	// Printer(std::string name, int paper)
	// {
	// 	privateName = name;
	// 	privateAvailablePaper = paper;
	// }
	Printer();
	Printer(const std::string &name, int paper);
	~Printer();

	void Print(const std::string &txtDoc);
};


Printer::Printer() : privateName("random"), privateAvailablePaper(10)
{
	std::cout << "DefaultPrinter " << privateName << " has been constructed with "
	<< privateAvailablePaper << " pages! " << std::endl;
}

Printer::Printer(const std::string &name, int paper) : privateName(name), privateAvailablePaper(paper)
{
	privateAvailablePaper = paper;
	std::cout << "Printer " << privateName << " has been constructed with "
	<< privateAvailablePaper << " pages!" << std::endl;
}

Printer::~Printer()
{
	std::cout << "Printer has been destroyed!" << std::endl;
}

void Printer::Print(const std::string &txtDoc)
{
	int requiredPaper = txtDoc.length() / 10;

	if (privateAvailablePaper < requiredPaper)
	{
		throw ("No Paper");
	}
	std::cout << "Printing..." << txtDoc << std::endl;

	privateAvailablePaper -= requiredPaper;
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