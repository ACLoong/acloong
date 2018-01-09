//
// Created by WangQing on 04/01/2018.
//

#ifndef ACLOONG_STRING_H
#define ACLOONG_STRING_H

#include "base.h"

#include <cstdio>
#include <string>

namespace ac {

    /**
     * @brief Character provides a character unit, it stores an utf16 character with 16 bit.
     */
    class Character {
    public:
        /**
         * @brief
         * @param character
         */
        explicit Character(char character = 0) ;

        /**
         * @brief
         * @param character
         */
        explicit Character(const Character &character) ;

        /**
         * @brief
         * @param character
         */
        explicit Character(const Character &&character) ;

        /**
         * @brief
         */
        ~Character() ;

        /**
         * @brief get the value in which store-unit
         * @return the value of which store-unit in value-passed not in reference-passed
         */
        char operator[] (size_t index)  const ;

        /**
         * @brief
         * @param character
         * @return
         */
        Character& operator= (const Character &character) ;

        /**
         *
         * @param character
         * @return
         */
        bool operator== (const Character &character) const ;

        /**
         *
         * @param character
         * @return
         */
        bool operator!= (const Character &character) const ;

        /**
         * @brief
         * @param character
         * @return
         */
        bool equals (const Character &character) const ;

        /**
         * @brief
         * @param character
         * @return
         */
        bool notEquals(const Character &character) const ;

    private:
        i8_t _data[2];
    };

    /**
     * @brief String provides a Unicode character string.
     * String stores a 16-bit char.
     */
    class String {
    public:
        enum Encode {
            ascii = 0,
            utf8  = 1,
            utf16 = 2,
            utf32 = 3,
        };

        static i8_t toInt8(const String &str);
        static i16_t toInt16(const String &str);
        static i32_t toInt32(const String &str);
        static i64_t toInt64(const String &str);
        static f32_t toF32(const String &str);
        static f64_t toF64(const String &str);
        static int toInt(const String &str);
        static float toFloat(const String &str);
        static double toDouble(const String &str);
        static std::string toStdString(const String &str);

        static String intToString(int number, int base = 10);
        static String int8ToString(i8_t number);
        static String int16ToString(i16_t number);
        static String int32ToString(i32_t number);
        static String int64ToString(i64_t number);
        static String f32ToString(f32_t number);
        static String f64ToString(f64_t number);
        static String floatToString(float number);
        static String doubleToString(double number);
        static String stdStringToString(const std::string &str);


        explicit String(const char *str = nullptr);
        explicit String(const std::string &str);
        explicit String(const String& str);
        explicit String(const String&& str);
        explicit String(Encode encode);
        String(size_t size, char ch);

        ~String();

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

        bool setEncode(Encode encode);
        bool setEncode(const String &encode);
        Encode encode() const;
        char *encodeStr() const;
        void toAscii();
        void toUtf8();
        void toUtf16();
        void toUtf32();

        void length() const;
        void freeLength() const;
        void capacity() const;
        std::string str() const;

        String &append (const String& str);
        String &append (const char *str);
        String &append (const std::string &str);
        String &prepend (const String& str);
        String &prepend (const char *str);
        String &prepend (const std::string &str);



    private:
        Encode   _encode = ascii;
        size_t   _length = 0;
        size_t   _freeLength = 0;
        size_t   _capacity = 0;
    };
}
#endif //ACLOONG_STRING_H
