#pragma once

#include <string>
#include <Windows/Windows.hpp>

namespace Windows
{
    using Handle = HWND;

    template <typename _derived>
    class WindowBase
    {
        static LRESULT WndProc(Handle, u32, WPARAM, LPARAM);

    public:
        WindowBase(wchar_t const windowClass[]);
        WindowBase(const WindowBase& base) = default;
        WindowBase(WindowBase&&) = default;

        virtual ~WindowBase() = 0;



    protected:
        Point          m_location;
        Size           m_size;
        Rectangle      m_clientRect;
        std::string    m_title = "";

        virtual void   m_onLoad(Handle sender, OnCreateArgs* args)  {}
        virtual void   m_onQuit(Handle sender) {}

    private:
        HWND*      m_handle = nullptr;
        WNDCLASS*  m_windowClass = nullptr;
        LRESULT    m_callback(Handle, u32, WPARAM, LPARAM);

    };
}