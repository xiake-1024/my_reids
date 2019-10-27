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
		struct zskiplistNode *header,*tail;//header 指向跳跃表的表头节点，指向跳跃表的表尾节点
		unsighed long length;	//跳跃表的长度或跳跃表节点数量计数器，除去第一个节点  4 个字节
		int level;    //跳跃表中节点的最大层数，除了第一个节点
	}


