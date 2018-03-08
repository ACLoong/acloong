//
// Created by WangQing on 31/01/2018.
//

#ifndef TEST_HASHTABLE_HPP
#define TEST_HASHTABLE_HPP

#include <string>

namespace ac {

    template <typename Key_Type, typename Value_Type>
    class HashTable {

    };

    template <typename Value_Type>
    class HashTable <int, Value_Type> {

    };

    template <typename Value_Type>
    class HashTable<std::string, Value_Type> {

    };


    template <typename Key_Type, typename Value_Type>
    class HashTabl_Impl {
        //implement of class HashTable
    };

}

#endif //TEST_HASHTABLE_HPP
