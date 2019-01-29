#include <Windows/Windows.WindowBase.hpp>

namespace Windows
{
    template <typename _derived>
    LRESULT CALLBACK 
    WindowBase<_derived>::WndProc(Handle handle, u32 message, WPARAM wordParam, LPARAM pointerParam)
    {
        WindowBase* caller = (WindowBase*) GetWindowLongPtr(handle, GWLP_USERDATA);
        if (caller) caller->m_callback(handle, message, wordParam, pointerParam);

        return DefWindowProc(handle, message, wordParam, pointerParam);
    }

    template <typename _derived>
    WindowBase<_derived>::WindowBase(wchar_t const windowClass[])
    {
        WNDCLASS wc = {};

        wc.lpszClassName = windowClass;
        wc.lpfnWndProc   = WindowBase::WndProc;
    }

    template <typename _derived>
    LRESULT CALLBACK 
    WindowBase<_derived>::m_callback(Handle handle, u32 message, WPARAM wordParam, LPARAM pointerParam)
    {
        switch ((WindowMessage)message)
        {
            case WindowMessage::Create:
                this->m_onLoad(handle, (OnCreateArgs*)pointerParam);
                break;

            case WindowMessage::Destroy:
                this->m_onQuit(handle);
                break;
        }
        
        return 0;
    }
}