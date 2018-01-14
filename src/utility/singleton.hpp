//
// Created by WangQing on 15/01/2018.
//

#ifndef ACLOONG_SINGLETON_HPP
#define ACLOONG_SINGLETON_HPP

#include <utility>

namespace ac {
/**
 * @brief
 */
    template<typename Tp>
    class Singleton {
    public:
        /**
         *
         * @tparam Args
         * @param args
         * @return
         */
        template<typename... Args>
        static Tp& getInstance(Args &&... args) {
            static Tp _instance(std::forward<Args>(args)...);
            return _instance;
        }

    private:
        Singleton() = default;
        virtual ~Singleton() = default;
        Singleton (const Singleton &) = default;
        Singleton operator= (const Singleton &) = default;
    };
}

#endif //ACLOONG_SINGLETON_HPP
