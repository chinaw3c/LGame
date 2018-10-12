/*************************************************************************
	> File Name: Empty/EmptyApplication.cpp
	> Author: 刘傲天
	> Mail: 1151172004@qq.com
	> Created Time: 2018年09月24日 星期一 23时00分11秒
 ************************************************************************/
#include "BaseApplication.hpp"

namespace My{
    BaseApplication g_App;
    IApplication* g_pApp = &g_App;
}
