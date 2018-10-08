/*************************************************************************
    > File Name: Framework/Interface/IApplication.hpp
    > Author: 刘傲天
    > Mail: 1151172004@qq.com 
    > Created Time: 2018-09-24
 ************************************************************************/

#pragma once
#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace My{
    Interface IApplication : implements IRuntimeModule{
public:
        virtual int Initialize() = 0;
        virtual void Finalize() = 0;
        virtual void Tick() = 0;
        virtual bool IsQuit() = 0;
    };
}
