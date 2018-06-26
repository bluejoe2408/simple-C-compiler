#ifndef _BLOCK_H_
#define _BLOCK_H_

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include "tree.h"
using namespace std;



//变量节点
struct varNode {
	string name;
	string type;
	int num = -1;
	bool useAddress = false;
	string boolString;
};

//函数节点
struct funcNode {
	bool isdefinied = false;
	string name;				//函数名
	string rtype;				//函数返回内容
	vector<varNode> paralist;	
};

//数组节点
struct arrayNode {
	string name;
	string type;
	int num = -1;
};


//block的内容
class Block {
public:
	funcNode func;
	bool isfunc = false;
	map<string, struct varNode> varMap;	
	map<string, struct arrayNode> arrayMap;	
	string breakLabelname;
	bool canBreak = false;
};

#endif // !_BLOCK_H_
