#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


#define LEN                    30
typedef struct Arr_t
{
    int *pBase;
    int len;
    int cnt;
};
void init_arr(struct Arr_t* pArr);
bool append_arr();
bool insert_arr();
bool delete_arr();
bool Is_full();
bool Is_empty();
void show_arr();
void inversion_arr();

int main()
{
    struct Arr_t arr;
    init_arr(&arr);
    
    return 0;
}

void init_arr(struct Arr_t* pArr)
{
    pArr->pBase = (int *)malloc( sizeof(int*) * LEN);
    if(NULL == pArr->pBase )
    {
        perror("动态分配内存年失败了\n");
        exit(-1);
    }
    else
    {
        pArr->len = LEN;
        pArr->cnt = 0;
    }
    return ;
}