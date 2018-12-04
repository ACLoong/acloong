# acloong  [![Build Status](https://travis-ci.org/ACLoong/acloong.svg?branch=master)](https://travis-ci.org/ACLoong/acloong)  
An easy to use library in Modern C++

### 介绍

1. `acloong` is an easy to use common components library which is written in modern standard C++.

2. All of the `acloong` codes acloong based on C++11 right now，and it does not depends on any thirdparty library.

3. 项目结构  
    acloong   
        |---README.md  
        |---doc  
        |---src        
        |---sample     
        |---test    

4. 待实现的内容
    1. 字符串操作工具集：该工具集封装对std::string、const char *的一些操作，如子串、字符串分割（支持正则）、拼接、格式输出等。
    2. ACString组件：二进制兼容的字符串(byte)。
    3. ACMath组件：提供丰富的数学计算，如矩阵计算、幂运算、大数等。
    4. 时间日期组件：主要封装std的时间和日期组件，提供统一且易用的接口。
    5. xml、json、protobuf解析组件：主要对json解析提供易用的接口。
    6. 随机数操作类：不仅支持基本的随机数操作、还支持丰富的随机数样式。
    7. 容器组件：提供基础数据结构容器，包括arraylist、linkedlist、map、set、hash、byte、heap等。
    8. utility组件：提供丰富的工具函数，如命令行参数组件等。
    9. conf组件：提供一个kv配置文件组件。
    10. 设计模式组件：提供一系列常用的设计模式组件。
    11. io组件：包含console、file system、log等。
    12. serialization组件：极简的序列化组件。

### 特性  

1. 项目全部采用标准C++语法；
2. 支持C++11标准；
3. 所有功能均以头文件或直接源码方式提供，只需包含文件即可使用；
4. 需要使用哪个功能，只需要将该功能头文件添加即可，而不是全部文件；
5. 由于采用标准C++语法，因此与平台无关。

###  How to contribute

1. `fork` this repository into your user account.
2. `clone` your repository to your local.
3. coding.
4. `push` your local changes to remote.
5. Request a `Pull Requests` to this repository.
6. `review` and merge.


###  About author

name: Jovan Wong
email：kingchin1218@126.com
