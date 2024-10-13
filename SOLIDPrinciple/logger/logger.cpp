#include "logger.hpp"
#include <iostream>

namespace Logger
{
    void DLogger::logMessage()
    {
        std::cout << "message" << std::endl;
    }

} // namespace Logger

int main()
{
    Logger::DLogger log;
    log.logMessage();
    return 0;
}
