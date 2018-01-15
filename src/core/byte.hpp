//
// Created by WangQing on 16/01/2018.
//

#ifndef ACLOONG_BYTE_HPP
#define ACLOONG_BYTE_HPP

#include "base.h"

#include <ostream>

namespace ac {
    /**
     * @brief
     */
    class Byte {
    public:
        explicit Byte(char ch = 0)
                :_data(ch)
        {

        }

        friend std::ostream &operator << (std::ostream &os, const Byte &rhs);
        friend std::istream &operator >>(std::istream &is, const Byte &rhs);

    private:
        i8_t _data;
    };

}
#endif //ACLOONG_BYTE_HPP
