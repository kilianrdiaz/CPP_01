#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string infileName;
    std::string outfileName;
    std::string s1;
    std::string s2;
    std::string line;

    if (argc != 4)
    {
        std::cout << "* Usage: " << argv[0] << " <filename> <search_string> <replace_string>" << std::endl;
        return 1;
    }

    infileName = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    outfileName = infileName + ".replace";

    std::ifstream readfile;
    std::ofstream writefile;

    readfile.open(infileName.c_str());
    writefile.open(outfileName.c_str());
    if (!readfile || !writefile)
    {
        std::cout << "Unable to open files!" << std::endl;
        readfile.close();
        writefile.close();
        return (1);
    }

    unsigned int    pos;
    unsigned int    found_end;
    std::string     tmp;

    while (std::getline(readfile, line))
    {
        tmp.clear();
        pos = line.find(s1);
        found_end = 0;
        if (pos < line.length())
        {
            tmp.append(line, found_end, pos - found_end);
            writefile << tmp << s2;
            tmp.clear();
        }
        else
            writefile << line;
    }

    readfile.close();
    writefile.close();
}