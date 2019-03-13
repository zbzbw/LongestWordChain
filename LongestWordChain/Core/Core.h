#pragma once


#ifdef CORE_EXPORTS
#define CORE_API __declspec(dllexport)
#else
#define CORE_API __declspec(dllimport)
#endif

extern "C" CORE_API int get_chain_word(char* words[], int len, char* result[], char head, char tail, bool enable_loop);
extern "C" CORE_API int get_chain_char(char* words[], int len, char* result[], char head, char tail, bool enable_loop);