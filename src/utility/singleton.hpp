#ifndef ACLOONG_SINGLETON_HPP
#define ACLOONG_SINGLETON_HPP

#include <utility>

namespace ac {
/**
 * @brief  Singleton template class
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
        static Tp& instance(Args &&... args) {
            static Tp _instance(std::forward<Args>(args)...);
            return _instance;
        }

    private:
        //private constructor
        Singleton() = default;
        //private destructor
        virtual ~Singleton() = default;
        //private copy constructor,Guaranteed not to be copyed
        Singleton (const Singleton &) = default;
        //private assignment function,Guaranteed not to be assigned
        Singleton operator= (const Singleton &) = default;
    };
}

#endif //ACLOONG_SINGLETON_HPP
