#ifndef TRANS_FILE_TABLE_H
#define TRANS_FILE_TABLE_H

#include "consts.h"
#include "file_table.h"

#define trans_table_len(table) ((table)->n * sizeof(struct trans_file_entry))

enum operation_type {
	ADD,
	DELETE,
	UPDATE
};

struct peer_id {
	char ip[IP_LEN];
	char port[PORT_LEN];
};

struct trans_file_entry {
	char name[MAX_LINE];
	int op_type;
	long int timestamp;
	int owner_n;
	struct peer_id owners[MAX_PEER_ENTRIES];
};

struct trans_file_table {
	int n;
	struct trans_file_entry entries[MAX_FILE_ENTRIES];
};

inline struct trans_file_entry *convert_from_file_entry(struct file_entry *entry)
{
	return NULL;
}

#endif