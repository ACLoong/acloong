//
// Created by WangQing on 03/01/2018.
//

#ifndef ACLOONG_BASE_H
#define ACLOONG_BASE_H

#include <cstdint>
#include <list>
#include <string>
#include <vector>
#include <set>

namespace ac{

    using i8_t      = int8_t ;
    using i16_t     = int16_t ;
    using i32_t     = int32_t ;
    using i64_t     = int64_t ;

    using u8_t      = uint8_t ;
    using u16_t     = uint16_t ;
    using u32_t     = uint32_t ;
    using u64_t     = uint64_t ;

    using byte_t    = int8_t;
    using ubyte_t   = uint8_t ;
    using f32_t     = float ;
    using f64_t     = double;

    using uchar_t   = unsigned char ;
    using ushort_t  = unsigned short ;
    using uint_t    = unsigned int ;
    using ulong_t   = unsigned long ;
    using ullong_t  = unsigned long long ;

    using sset_t    = std::set<std::string> ;
    using slist_t   = std::list<std::string> ;
    using svec_t    = std::vector<std::string> ;

    using iset_t    = std::set<int32_t> ;
    using ilist_t   = std::list<int32_t > ;
    using ivec_t    = std::vector<int32_t> ;

    using nullptr_t = decltype(nullptr) ;
}

#endif //ACLOONG_BASE_H
