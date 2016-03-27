/*======================================================
    > File Name: lockFreeQueue.h
    > Author: MiaoShuai
    > E-mail:  
    > Other :  
    > Created Time: 2016年03月27日 星期日 10时29分56秒
 =======================================================*/
#pragma once

#include <atomic>
#include <string>
#include <iostream>
#include <list>

template <typename T>
class LockFreeQueue
{
    public:
        //入队
        void push_back(T t);
        //出队
        T pop_front(void);
    private:
        //CAS比较交换
        void CAS(T *src,T *dest,int newVal);
        
        typedef ValList std::list<T>;
        ValList valList_;       
};

