#include <iostream>
#include <fstream>
#include <string>

void    find_and_replace(std::ifstream &readfile, std::ofstream &writefile,
                            std::string searchStr, std::string replaceStr)
{
    unsigned int    pos;
    unsigned int    found_end;
    std::string     line;
    std::string     tmp;

    while (std::getline(readfile, line))
    {
        tmp.clear();
        pos = line.find(searchStr);
        found_end = 0;
        if (pos < line.length())
        {
            while (pos < line.length())
            {
                tmp.append(line, found_end, pos - found_end);
                writefile << tmp << replaceStr;
                found_end = pos + searchStr.length();
                tmp.clear();
                pos = line.find(searchStr, found_end);
            }
            tmp.append(line, found_end);
            writefile << tmp;
        }
        else
            writefile << line;
        writefile << std::endl;
    }
}

bool    open_files(std::string infileName, std::string outfileName,
                        std::ifstream &readfile, std::ofstream &writefile)
{
    readfile.open(infileName.c_str());
    writefile.open(outfileName.c_str());
    if (!readfile || !writefile)
    {
        std::cout << "Unable to open files!" << std::endl;
        readfile.close();
        writefile.close();
        return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    std::string infileName;
    std::string outfileName;
    std::string s1;
    std::string s2;

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

    if (!open_files(infileName, outfileName, readfile, writefile))
        return (1);

    find_and_replace(readfile, writefile, s1, s2);

    readfile.close();
    writefile.close();
}