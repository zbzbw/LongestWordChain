﻿// Core.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"


int gen_chain_word(char* words[], int len, char* result[], char head, char tail, bool enable_loop)
{
	core c;
	return c.gen_chain_word(words, len, result, head, tail, enable_loop);
}
int gen_chain_char(char* words[], int len, char* result[], char head, char tail, bool enable_loop)
{
	core c;
	return c.gen_chain_char(words, len, result, head, tail, enable_loop);
}