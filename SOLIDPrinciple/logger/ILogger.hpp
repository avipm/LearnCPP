#pragma once

#include <iostream>

namespace Logger
{
    class ILogger
    {
        public:
        virtual void logMessage() = 0;
            

    };


} // namespance Logger