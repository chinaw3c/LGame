/*************************************************************************
    > File Name: Framework/Common/BaseApplication.hpp
    > Author: 刘傲天
    > Mail: 1151172004@qq.com 
    > Created Time: 2018-09-24
 ************************************************************************/

#pragma once 
#include "IApplication.hpp"

namespace My{
    class BaseApplication : implements IApplication{
        public:
            virtual int Initialize();
            //One cycle of the main loop;
            virtual void Finalize();
            virtual void Tick();
            virtual bool IsQuit();

        protected:
            //Flag if need quit the main loop of the application 
            bool m_bQuit;
    };
}
