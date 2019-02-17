#ifndef ACLOONG_NONCOPYABLE_HPP
#define ACLOONG_NONCOPYABLE_HPP

namespace ac {

    class noncopyable {
    protected:
        noncopyable () = default;
        virtual ~noncopyable () = default;

        noncopyable (const noncopyable&) = delete;
        noncopyable& operator= (const noncopyable&) = delete;
    };

} // namespace ac


#endif //ACLOONG_NONCOPYABLE_HPP
