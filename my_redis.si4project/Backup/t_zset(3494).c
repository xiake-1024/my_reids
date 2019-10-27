#include "server.h"
#include<math.h>

int zslRandomLevel(void) {          //返回一个随机层数值
    int level = 1;
    //(random()&0xFFFF)只保留低两个字节的位值，其他高位全部清零，所以该值范围为0到0xFFFF
    while ((random()&0xFFFF) < (ZSKIPLIST_P * 0xFFFF))  //ZSKIPLIST_P（0.25）所以level+1的概率为0.25
        level += 1;         //返回一个1到ZSKIPLIST_MAXLEVEL（32）之间的值
    return (level<ZSKIPLIST_MAXLEVEL) ? level : ZSKIPLIST_MAXLEVEL;
}


