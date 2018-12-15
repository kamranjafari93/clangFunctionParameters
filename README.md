# ClangFunctionParameters
This is a static analysis using clang to check whether parameters of functions in a given C++ code has more than 3 parameters or not to warn the developers.

## Table of contents
* **[Requirements](#requirements)**
* **[Install](#install)**
* **[Tutorial](#tutorial)**
* **[Test](#test)**

## Requirements
You should install followings in order:

- LLVM
- Clang
- Clang-tidy


## Install

Now we need to create our custom check using clang-tidy.

First, run following command:

```
clang-tidy/add_new_check.py misc function-max-three-parameters
```

This will create needed classes for you in addition to registering your modules automatically.[Read this](http://clang.llvm.org/extra/clang-tidy/)

Second, replace Function_max_three_parametersCheck.cpp and Function_max_three_parametersCheck.h in llvm/tools/clang/extra/clang-tidy/misc/

Then you need to build your project [Read this](https://clang.llvm.org/get_started.html)

## Tutorial

Simply run the test in cmd in a path where your cpp file exists:

```
clang-tidy YOUR_FILE_NAME.cpp -checks=*
```
Of course you can disable some checks.  You will see warnings like this: "Warning: Functions must not have more than three parameters: function X has more", if mentioned function has more than 3 parameters.

## Test

This check has been tested on several files including: https://github.com/tencent-wechat/libco/blob/master/co_epoll.cpp, https://github.com/tencent-wechat/libco/blob/master/coctx.cpp and [Source.cpp](Source.cpp).
