//
// Created by WangQing on 2018/1/18.
//

#ifndef ACLOONG_LINKEDLIST_H
#define ACLOONG_LINKEDLIST_H

#include <cstdio>

namespace ac {

/**
 *
 * @tparam Tp
 */
    template<typename Tp>
    class LinkedList {
    public:
        class Node;
        class Iter;

        LinkedList();
        explicit LinkedList(size_t size);
        LinkedList(size_t size, const Tp &data);
        LinkedList(const LinkedList<Tp> &list);
        LinkedList(const LinkedList<Tp> &&list) noexcept ;
        ~LinkedList();

        LinkedList<Tp> &operator = (const LinkedList<int> &rhs);
        LinkedList<Tp> &operator += (const LinkedList<Tp> &rhs);
        LinkedList<Tp> operator + (const LinkedList<Tp> &rhs);

    private:
        Node    *_head;
        Node    *_tail;
        size_t  _length;
        size_t  _capacity;
    };

    /**
     *
     * @tparam Tp
     */
    template <typename Tp>
    class LinkedList<Tp>::Node {
        Tp *_prev;
        Tp *_next;
        Tp  _value;
    };

    /**
     *
     * @tparam Tp
     */
    template <typename Tp>
    class LinkedList<Tp>::Iter {
        Node *_currptr;
    };

    /**
     *
     * @tparam Tp
     */
    template<typename Tp>
    LinkedList<Tp>::LinkedList() {

    }

    /**
     *
     * @tparam Tp
     * @param size
     * @param data
     */
    template<typename Tp>
    LinkedList<Tp>::LinkedList(size_t size, const Tp &data) {

    }

    /**
     *
     * @tparam Tp
     * @param list
     */
    template<typename Tp>
    LinkedList<Tp>::LinkedList(const LinkedList<Tp> &list) {
    }

    /**
     *
     * @tparam Tp
     * @param list
     */
    template<typename Tp>
    LinkedList<Tp>::LinkedList(const LinkedList<Tp> &&list) noexcept {

    }

    /**
     *
     * @tparam Tp
     */
    template<typename Tp>
    LinkedList<Tp>::~LinkedList() {

    }

    /**
     *
     * @tparam Tp
     * @param rhs
     * @return
     */
    template<typename Tp>
    LinkedList<Tp> &LinkedList<Tp>::operator=(const LinkedList<int> &rhs) {
        return <#initializer#>;
    }

    /**
     *
     * @tparam Tp
     * @param size
     */
    template<typename Tp>
    LinkedList<Tp>::LinkedList(size_t size) {

    }

    /**
     *
     * @tparam Tp
     * @param rhs
     * @return
     */
    template<typename Tp>
    LinkedList<Tp> LinkedList<Tp>::operator+(const LinkedList<Tp> &rhs) {
        return LinkedList<Tp>();
    }

    /**
     *
     * @tparam Tp
     * @param rhs
     * @return
     */
    template<typename Tp>
    LinkedList<Tp> &LinkedList<Tp>::operator+=(const LinkedList<Tp> &rhs) {
        return <#initializer#>;
    }
}

#endif //ACLOONG_LINKEDLIST_H
