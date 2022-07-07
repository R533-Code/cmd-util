#ifndef HG_STRUCT_CMD
#define HG_STRUCT_CMD

#include "pch.h"

typedef struct
{
	uint64_t usage_count;
	char name[32];
	char path[64];
} cmd;

#endif // !1
