#ifndef ACLOONG_UNCOPYABLE_HPP
#define ACLOONG_UNCOPYABLE_HPP

namespace ac {
    /**
     * @brief
     */
    class Uncopyable {
    protected:
        Uncopyable () = default;
        virtual ~Uncopyable () = default;

        Uncopyable (const Uncopyable&) = delete;
        Uncopyable& operator= (const Uncopyable&) = delete;
    };
}


#endif //ACLOONG_UNCOPYABLE_HPP
