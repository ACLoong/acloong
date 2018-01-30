//
// Created by PokemonWei on 2018/1/18.
//

#include "str/strCodec.h"
#include <iostream>


namespace  ac{

    /**
     * @class Bytes
     */
    Bytes::Bytes(size_t len, Encode codeFlag)
    {
        if(len > 0)
        {
            data = new i8_t[len];
            for (int i = 0; i < len; ++i) {
                data[i] = 0;
            }
        } else data = nullptr;

        length = len;
        encode = codeFlag;
    }

    template <typename T>
    Bytes::Bytes(T *array, size_t len, Encode codeFlag)
    {
        if(len > 0)
        {
            data = new i8_t[len];
            for (int i = 0; i < len; ++i) {
                data[i] = array[i];
            }
        } else data = nullptr;

        length = len;
        encode = codeFlag;
    }

    i8_t Bytes::getData(int num) const
    {
        if(num>=length)
        {
            std::cerr << "the Bytes small than" << num+1 << "bytes" ;
            return 0;
        }
        return data[num];
    }

    bool Bytes::setData(i8_t str, int num)
    {
        if(num>=length)
        {
            return false;
        }
        data[num] = str;
        return true;
    }

    bool Bytes::setEncodeStyle(Encode e)
    {
        encode = e;
        return true;
    }

    Encode Bytes::getEncodeStyle() const
    {
        return encode;
    }

    bool Bytes::setLength(size_t len)
    {
        delete[] data;
        data = new i8_t[len];
        if(data== nullptr) return false;
        return true;
    }

    size_t Bytes::getLength() const
    {
        return  length;
    }
}


namespace ac
{
    /**
     * @class StrCodec
     */
    Bytes StrCodec::convertUTF8toUTF32(const Bytes & utf8)
    {
        size_t len = utf8.getLength();
        std::vector<i8_t > utf32_temp;
        Bytes utf32(0,ERROR);
        size_t charPoint = 0;
        i8_t afterBytes = 0;
        while (charPoint < len)
        {
            afterBytes = 0;
            if (utf8.getData(charPoint)<= 0x7F)
            {
                utf32_temp.push_back(utf8.getData(charPoint));
            }
            else if(utf8.getData(charPoint) <= 0xDF && utf8.getData(charPoint)>=0xC0)
            {
                afterBytes = 1;
            }
            else if(utf8.getData(charPoint) <= 0xE0 && utf8.getData(charPoint)>=0xEF)
            {
                afterBytes = 2;
            }
            else if(utf8.getData(charPoint) <= 0xF0 && utf8.getData(charPoint)>=0xF7)
            {
                afterBytes = 3;
            }
            else
            {
                return utf32;
            }


            if(afterBytes>0)
            {
                i8_t first = 0;
                switch(afterBytes) {
                    case 1:
                        first = utf8.getData(charPoint) & 0x1F;
                        break;
                    case 2:

                        break;
                    case 3:
                        break;
                    default:
                        return utf32;
                }
            }
            charPoint = charPoint + afterBytes + 1;

        }

    }
}