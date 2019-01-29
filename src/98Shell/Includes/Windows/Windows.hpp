#pragma once

#ifndef UNICODE
#define UNICODE true
#endif

#define BUILDDATE  __DATE__
#define BUILDTIME  __TIME__

#define WIN32_MEAN_AND_MEAN

#include <cstdint>
#include <Windows.h>

#pragma region Undef Predefined-Macros
// min(a,b) and max(a,b) are macros defined in Windows.h,
// however, it collides with std::max and std::min so these have to be removed.
#undef min
#undef max
#pragma endregion

namespace Windows 
{
    using sbyte       =   int8_t;
    using i16         =   int16_t;
    using i32         =   int32_t;    
    using i64         =   int64_t;

    using byte        =   uint8_t;
    using u16         =   uint16_t;
    using u32         =   uint32_t;
    using u64         =   uint64_t;

    using f32         =   float;
    using f64         =   double;

    using Size        =   SIZE;
    using Rectangle   =   RECT;
    using Point       =   POINT;
    using Color       =   u32;
}

#include "Windows.Flags.hpp"
#include "Windows.WindowStyle.hpp"
#include "Windows.WindowMessage.hpp"
#include "Windows.WindowBase.hpp"