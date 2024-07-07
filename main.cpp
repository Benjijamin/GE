#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

std::string getTime()
{
    auto t = std::chrono::system_clock::now();
    std::time_t time = std::chrono::system_clock::to_time_t(t);
    std::string timeStr = std::ctime(&time);

    return timeStr;
}

int main()
{   
    //Setup logging
    std::string timeStart = getTime();

    freopen( "log.txt" , "a", stdout);

    std::cout << std::endl << "LOG --- " << timeStart << std::endl;

    std::cout << "log test" << std::endl; 

    return 0;
}