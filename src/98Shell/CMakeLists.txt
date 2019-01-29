cmake_minimum_required (VERSION 3.8)

add_definitions( -DUNICODE=true )

add_executable (98Shell WIN32 "ShellMain.cpp"
							  "Windows/Windows.WindowBase.cpp"
						      "Shell/Taskbar.cpp"
							  "Includes/Taskbar.hpp"
							  "Includes/Windows/Windows.hpp"
							  "Includes/Windows/Windows.Flags.hpp"
							  "Includes/Windows/Windows.WindowBase.hpp"
							  "Includes/Windows/Windows.WindowHook.hpp"
							  "Includes/Windows/Windows.WindowMessage.hpp"
							  "Includes/Windows/Windows.WindowStyle.hpp")

target_include_directories(98Shell PUBLIC "Includes")