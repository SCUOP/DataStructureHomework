#include "../head/AllLine.h"
#include <string>

bool AllLine::substitute(int subLineNum)
{
    try
    {
        if (!go(subLineNum))
            return false;
        std::string subStr;
        int temp = getchar();
        std::cout << "What text do U want to replace: ";
        std::getline(std::cin, subStr);
        setEachLine(subStr);
        return true;
    }
    catch (...)
    {
        return false;
    }
}