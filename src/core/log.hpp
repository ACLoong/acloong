//
// Created by WangQing on 14/01/2018.
//

#ifndef ACLOONG_LOG_HPP
#define ACLOONG_LOG_HPP

#include "utility/singleton.hpp"
#include "strkit.hpp"

#include <string>
#include <functional>
#include <chrono>

namespace ac {

    enum Level {
        Trace,
        Debug,
        Info,
        Warn,
        Error,
        Fatal,
    };

#define trace() MACROLOG(Trace)
#define debug() MACROLOG(Debug)
#define info() MACROLOG(Info)
#define warn() MACROLOG(Warn)
#define error() MACROLOG(Error)
#define fatal() MACROLOG(Fatal)

#define MACROLOG(Level) do { \
    auto t = std::chrono::system::clock::to_time_t(std::chrono::system_clock::now()); \
    Log(Level, __FILE__, __func__, __LINE__, \
    strkit::int2Str(getpid()), \
    strkit::str2Int(std::this_thread::get_id()), \
    std::put_time(std::localtime(&t), "%Y-%m-%d %X") \
    ) \
} while(0)

    class LogContext {
    };

    class Log {
    public:
        const static std::string levelStr[] = {
                "Trace",
                "Debug",
                "Info",
                "Warn",
                "Error",
                "Fatal",
        };

        using FormatFuncType = std::string (Level,
                                            const std::string &,
                                            const std::string &,
                                            int,
                                            const std::string &,
                                            const std::string &,
                                            const std::string &);

        Log(Level level,
            const std::string &file,
            const std::string &func,
            int                line,
            const std::string &proc,
            const std::string &thread,
            const std::string &timestamp
        );

        virtual ~Log();

        Log &operator << (const std::string &message);
        Log &operator << (int number);
        Log &operator << (double number);

    private:
        std::string                     _buffer;
        Level                           _currLevel;
        std::string                     _file;
        std::string                     _func;
        int                             _line;
        std::string                     _procStr;
        std::string                     _threadStr;

        std::string                     _timestampStr;

        std::function<FormatFuncType>   _formatPrint;
    };
}

#endif //ACLOONG_LOG_HPP
