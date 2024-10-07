# Day 30
### File handling

**modes:**
- "r" - read mode
	- opens file in read only mode
	- file must exist; else fopen() returns NULL
- "W" - write mode
	- opens in write-only mode
	- if exists contents are overwritten
	- else it is created
	- file pointer is placed at the beginning of the file
- "a" - append mode
	- opens in write only mode
	- data is appended to the end of the file.
	- if does not exist, it is created
	- file pointer is placed at the end of the file
- "r+" - Read/update mode
	- opens both read and write
	- must exist, else return NULL
	- pointer to the beginning
- "w+" - write/update mode
	- both read and write
	- if exists, contents are over written
	- else created
	- pointer to the beginning
- "a+" - append/update mode
	- both read and write
	- data appends to the end of the file
	- if does not exist, created
	- pointer to the EOF.

```c

Syntax:


FILE *ptr;
ptr=fopen("path_to_file/filename","mode");
fclose(ptr);
```
