#include<iostream>
#include<omp.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 3, m;
    cout<<"Enter the number of characters:- ";
    cin>>m;
    char ch[m], t = 'a';
    int i, j, k;
    for(i = 0; i<m; i++){
        ch[i] = t;
        t++;
    }

    for(i=0,j=0,k=0; i<m,j<m,k<m; i++,j++,k++)
                printf("Executing in thread number:- %d\nResult:- %c%c%c\n", omp_get_thread_num(), ch[i], ch[j], ch[k]);
                
    return 0;
}
