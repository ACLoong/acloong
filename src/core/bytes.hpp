//
// Created by WangQing on 16/01/2018.
//

#ifndef ACLOONG_BYTES_HPP
#define ACLOONG_BYTES_HPP

#include "core/types.hpp"

namespace ac {
    class Bytes {
    public:
        explicit Bytes(const char* rhs = nullptr);
        Bytes(size_t size);

    private:
        i8_t   *_data;
        size_t _length;
    };
}
#endif //ACLOONG_BYTES_HPP
