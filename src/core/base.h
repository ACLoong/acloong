//
// Created by WangQing on 03/01/2018.
//

#ifndef ACLOONG_BASE_H
#define ACLOONG_BASE_H

#include <cstdint>

namespace acloong {

    using i8_t      = int8_t ;
    using i16_t     = int16_t ;
    using i32_t     = int32_t ;
    using i64_t     = int64_t ;

    using u8_t      = uint8_t ;
    using u16_t     = uint16_t ;
    using u32_t     = uint32_t ;
    using u64_t     = uint64_t ;

    using byte      = int8_t;
    using ubyte     = uint8_t ;
    using f32       = float ;
    using f64       = double;

    using uchar     = unsigned char ;
    using ushort    = unsigned short ;
    using uint      = unsigned int ;
    using ulong     = unsigned long ;
    using ullong    = unsigned long long ;

    using nullptr_t = decltype(nullptr) ;
}

#endif //ACLOONG_BASE_H
