#include <iostream>
#include <fstream>
#include <string>
#include "replace.hpp"


int main(int argc, char **argv)
{
	if (argc != 4)
	{
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty())
	{
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    std::ifstream infile(filename.c_str());
    if (!infile.is_open())
	{
        std::cerr << "Error: Could not open input file: " << filename << std::endl;
        return 1;
    }

    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
	{
        std::cerr << "Error: Could not create output file." << std::endl;
        infile.close();
        return 1;
    }

	std::string line;
    while (std::getline(infile, line))
	{
        outfile << replace_all(line, s1, s2) << std::endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
