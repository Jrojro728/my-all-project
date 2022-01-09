#pragma once

#include <iostream>

/*
     作者：赵城（苦瓜）
     时间：2022年1月9日

     此头文件是我所有程序的集合（包括一些我用来偷懒的函数），只要引用此头文件就可以使用我的程序。
*/


int count1(int x, int y)
{
    return x * 2 + y * 4;
}

int math(int jiao,int a)
{
    int temp;
    int call;
    int x{};
    int y{};

    x = a;
    for (call = 0; call < 10000; call++)
    {
        temp = x * 2 + y * 4;
        if (jiao == temp)
        {
            std::cout << "========结果========\n";
            std::cout << "鸡的数量是：" << x << "\n" << "兔子的数量是：" << y << "\n" << "运算了" << call << "次" << "\n";
            break;
        }
        else
        {
            x = x - 1;
            y = y + 1;
        }
    }

    return 0;
}

int math1(int x,int y)
{
    int temp1;
    int temp2;
    temp1 = x - y;
    temp2 = x + y;
    std::cout << "这个平行四边形的面积是：" << temp1 * temp2 << "\n";
    
    return 0;
}
