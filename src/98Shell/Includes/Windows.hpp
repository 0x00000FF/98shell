#pragma once

#include <cstdint>
#include <Windows.h>

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
#include "Windows.WindowBase.hpp"