#define MAXSIZE 100
typedef int  datatype ;
typedef struct sequence_list
{
    datatype a[MAXSIZE];
    int size;
}sequence_list;

void initseqlist(sequence_list *L);
void input(sequence_list *L);
void inputfromfile(sequence_list *L, char *r);
void print(sequence_list *L);
void reverse(sequence_list *L);
void sprit(sequence_list *L1, sequence_list *L2, sequence_list *L3);
void merge(sequence_list *L1, sequence_list *L2, sequence_list *L3);
