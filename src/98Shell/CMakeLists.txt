cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (98Shell WIN32 "ShellMain.cpp"
						      "Includes/Windows.hpp"
							  "Includes/Windows.Flags.hpp"
							  "Includes/Windows.WindowBase.hpp")

target_include_directories(98Shell PUBLIC "Includes")

# TODO: Add tests and install targets if needed.
