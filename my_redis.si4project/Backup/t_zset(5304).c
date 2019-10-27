#include<math.h>

/*跳跃表节点实现*/
typeof struct zskiplistNode {
	robj *obj;				//保存成员对象的地址
	double score; 			//分值     8个字节
	struct zskiplistNode *backward;  //后退指针
	struct zskiplistLevel {
		struct zskiplistNode *forward;  //前进指针
		unsigned int span; 		//跨度   4个字节			
	} level [];					//层级柔性数组??
} zskiplistNode; 


/*定义跳跃表结构*/
typeof struct zskiplist {
		//表头节点
	}

