#ifndef ACLOONG_NONCOPYABLE_HPP
#define ACLOONG_NONCOPYABLE_HPP

namespace ac {
    class Noncopyable {
    protected:
        Noncopyable () = default;
        virtual ~Noncopyable () = default;

        Noncopyable (const Noncopyable&) = delete;
        Noncopyable& operator= (const Noncopyable&) = delete;
    };
}


#endif //ACLOONG_NONCOPYABLE_HPP
