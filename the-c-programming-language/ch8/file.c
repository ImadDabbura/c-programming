#define NULL 0
#define EOF (-1)
#define BUFSIZE 1024
#define OPEN_MAX 20

typedef struct _iobuf
{
    int  cnt;
    char *ptr;
    char *base;
    int  flags;
    int  fd;
} FILE;

// Array of OPEN_MAX file objects. This means you can only have OPEN_MAX 
// files opened at the same time
extern FILE _iob[OPEN_MAX];     

enum _flags {
    _READ  = 01,
    _WRITE = 02,
    _UNBUF = 04,
    _EOF   = 010,
    _ERR   = 020,
};

#define feof(fp) (((fp)->flags & _EOF) != 0)
#define ferror(fp) (((fp)->flags & _ERR) != 0)
#define fileno(fp) ((fp)->fd)
