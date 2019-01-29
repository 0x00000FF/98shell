#pragma once
#include <Windows/Windows.WindowBase.hpp>

class Taskbar final : public Windows::WindowBase<Taskbar>
{
    static Taskbar* _instance;
    
    public:
    static Taskbar* getInstance();

    private:
    
    void m_initializeTaskbar();
    
    
    Taskbar() : WindowBase(L"Taskbar")  { m_initializeTaskbar(); }

};