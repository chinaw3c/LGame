/*************************************************************************
    > File Name: Framework/Interface/IRuntimeModule.hpp
    > Author: 刘傲天
    > Mail: 1151172004@qq.com 
    > Created Time: 2018-09-24
 ************************************************************************/

#pragma once

#include "Interface.hpp"

namespace My{
    Interface IRuntimeModule{
        public:
            virtual ~IRuntimeModule() {};
            /*纯虚函数*/
            virtual int Initialize() = 0;
            virtual void Finalize() = 0;
            virtual void Tick() = 0;
    };
}
