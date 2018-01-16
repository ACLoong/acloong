//
// Created by WangQing on 15/01/2018.
//

#ifndef ACLOONG_ARRAYLIST_HPP
#define ACLOONG_ARRAYLIST_HPP

#include "core/base.h"

#include <stdio.h>

namespace ac {

    /**
     *
     * @tparam Tp
     */
    template <typename Tp>
    class ArrayList {
    public:

        template <typename Tp>
        class Iter<Tp> {
        public:
            Iter(){ }
            Iter(const Iter &rhs) {this->_index = rhs._index;}

            Iter &operator++ () {
                ++_index;
                return *this;
            }

            const Iter &operator++ (int) {
                Iter iter = *this;
                ++_index;
                return iter;
            }

            Iter &operator-- () {
                --_index;
                return *this;
            }

            const Iter &operator-- (int) {
                Iter iter = *this;
                --_index;
                return iter;
            }

            Tp &operator*() {
                return _data[_index];
            }

        private:
            size_t _index;
            Tp     *_data;
        };

        ArrayList();
        ArrayList(size_t size, Tp value);
        ArrayList(const ArrayList &&rhs);
        ArrayList(const ArrayList &rhs);
        virtual ~ArrayList();

        ArrayList<Tp> &operator = (const ArrayList<Tp> &rhs);

        size_t getLength() const;
        size_t getCapacity() const;
        size_t getSize() const;

    private:
        Tp       *_data = nullptr;
        size_t   _length = 0;
        size_t   _capacity = 0;
        index_t  _start = 0;
        index_t  _end = 0;
    };

    /**
     *
     * @tparam Tp
     */
    template <typename Tp>
    ArrayList<Tp>::ArrayList()
    {
        //TODO
    }

    /**
     *
     * @tparam Tp
     */
    inline template <typename Tp>
    ArrayList<Tp>::~ArrayList()
    {
        //TODO
    }

    /**
     *
     * @tparam Tp
     */
    inline template <typename Tp>
    ArrayList<Tp>::ArrayList(size_t size, Tp value)
    {
        //TODO
    }

    /**
     *
     * @tparam Tp
     * @param rhs
     */
    inline template <typename Tp>
    ArrayList<Tp>::ArrayList(const ArrayList &rhs)
    {
        //TODO
    }

    /**
     *
     * @tparam Tp
     * @param rhs
     */
    inline template <typename Tp>
    ArrayList<Tp>::ArrayList(const ArrayList &&rhs)
    {
        //TODO

        ArrayList<int>::Iter it;
        *it;
    }
}

#endif //ACLOONG_ARRAYLIST_HPP
