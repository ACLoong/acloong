//
// Created by WangQing on 04/01/2018.
//

#ifndef ACLOONG_ACSTRING_H
#define ACLOONG_ACSTRING_H

#include "base.h"

#include <cstdio>
#include <string>

namespace acloong {

    class ACCharacter {
        //TODO
    private:
        i32_t _data[2];
    };

    /**
     * @brief ACString provides a Unicode character string.
     * ACString stores a 16-bit char.
     */
    class ACString {
    public:
        enum ACEncode {
            ascii = 0,
            utf8  = 1,
            utf16 = 2,
            utf32 = 3,
        };

        static i8_t toInt8(const ACString &str);
        static i16_t toInt16(const ACString &str);
        static i32_t toInt32(const ACString &str);
        static i64_t toInt64(const ACString &str);
        static f32_t toF32(const ACString &str);
        static f64_t toF64(const ACString &str);
        static int toInt(const ACString &str);
        static float toFloat(const ACString &str);
        static double toDouble(const ACString &str);
        static std::string toStdString(const ACString &str);

        static ACString intToACString(int number, int base = 10);
        static ACString int8ToACString(i8_t number);
        static ACString int16ToACString(i16_t number);
        static ACString int32ToACString(i32_t number);
        static ACString int64ToACString(i64_t number);
        static ACString f32ToACString(f32_t number);
        static ACString f64ToACString(f64_t number);
        static ACString floatToACString(float number);
        static ACString doubleToACString(double number);
        static ACString stdStringToACString(const std::string &str);


        explicit ACString(const char *str = nullptr);
        explicit ACString(const std::string &str);
        explicit ACString(const ACString &str);
        explicit ACString(const ACString &&str);
        explicit ACString(ACEncode encode);
        ACString(size_t size, char ch);

        ~ACString();

        i8_t toInt8() const;
        i16_t toInt16() const;
        i32_t toInt32() const;
        i64_t toInt64() const;
        f32_t toF32() const;
        f64_t toF64() const;
        int toInt() const;
        float toFloat() const;
        double toDouble() const;
        std::string toStdString() const;

        bool setEncode(ACEncode encode);
        bool setEncode(const ACString &encode);
        ACEncode encode() const;
        char *encodeStr() const;
        void toAscii();
        void toUtf8();
        void toUtf16();
        void toUtf32();

        void length() const;
        void freeLength() const;
        void capacity() const;
        std::string str() const;

        ACString &append(const ACString &str);
        ACString &append(const char *str);
        ACString &append(const std::string &str);
        ACString &prepend(const ACString &str);
        ACString &prepend(const char *str);
        ACString &prepend(const std::string &str);

    private:
        ACEncode _encode = ascii;
        size_t   _length = 0;
        size_t   _freeLength = 0;
        size_t   _capacity = 0;
    };
}
#endif //ACLOONG_ACSTRING_H
