//
// Created by xfc on 2018/1/21.
//

#ifndef ACLOONG_ACMATH_H
#define ACLOONG_ACMATH_H

#include "../core/bytes.hpp"

namespace acmath{

    ac::Bytes* bigNumAdd(const ac::Bytes* const bytes1, const ac::Bytes* const bytes2) {
        //TODO

    }

    bool isFloat(const ac::Bytes* const bytes) {
        //TODO
        return false;
    }

    bool isNegNum( ac::Bytes* const bytes) {
        //TODO
        if (0 == bytes->size()) {
            return false;
        }

        if (bytes[0] == '-') {
            return true;
        }
        return false;
    }
}

#endif //ACLOONG_ACMATH_H
