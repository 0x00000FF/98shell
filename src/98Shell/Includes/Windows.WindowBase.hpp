#pragma once

#include <string>
#include <Windows.h>

namespace Windows
{
    class WindowBase
    {
    public:
        WindowBase() = default;
        WindowBase(const WindowBase& base) = default;
        WindowBase(WindowBase&&) = default;

        virtual ~WindowBase();

    protected:
        

    private:
        Point          m_location;
        Size           m_size;
        Rectangle      m_clientRect;
        std::string    m_title              =  "";

    };
}