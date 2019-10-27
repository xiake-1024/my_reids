#include "server.h"
#include<math.h>

//返回一个随机层数值
int zslRandomLevel(void) {      
    int level = 1;
    //(random()&0xFFFF)只保留低两个字节的位值，其他高位全部清零，所以该值范围为0到0xFFFF
    while ((random()&0xFFFF) < (ZSKIPLIST_P * 0xFFFF))  //ZSKIPLIST_P（0.25）所以level+1的概率为0.25
        level += 1;         //返回一个1到ZSKIPLIST_MAXLEVEL（32）之间的值
    return (level<ZSKIPLIST_MAXLEVEL) ? level : ZSKIPLIST_MAXLEVEL;
}
//创建一个层数为level，分数为score,对象为obj的跳跃表节点
zskiplistNode *zslCreateNode(int level,double score, robj *obj){
	zskiplistNode* NewNode=zmalloc(sizeof(zskiplistNode));
	NewNode->zskiplistLevel=zmalloc
}
//创建返回一个跳跃表 表头为zskiplist
zskiplist *zslCreate(void){
	

}
//释放一个跳跃表节点
void zslFreeNode(zskiplistNode *node){
}
//释放跳跃表表头zsl,以及跳跃表节点
void zslFree(zskiplist *zsl){
}

//创建一个节点，分数为score，对象为obj，插入到zsl表头管理的跳跃表中，并返回新节点的地址
zskiplistNode *zslInsert(zskiplist *zsl, double score, robj *obj) {}

//被zslDelete, zslDeleteByScore and zslDeleteByRank使用的内部函数
//删除节点
void zslDeleteNode(zskiplist *zsl, zskiplistNode *x, zskiplistNode **update) {}

//删除score和obj的节点
int zslDelete(zskiplist *zsl, double score, robj *obj) {}



// 从ziplist中查找ele，将分值保存在score中
unsigned char *zzlFind(unsigned char *zl, robj *ele, double *score) {}





