#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int np,nr;
    printf("Enter the Number of Processes ");
    scanf("%d",&np);
    printf("Enter the Number of resource types ");
    scanf("%d",&nr);

    printf("Enter the Available matrix ");
    int avm[nr];
    for(int i=0;i<nr;i++)
        cin >> avm[i];

    printf("Enter the Max matrix ");
    int mm[np][nr];
    for (int i = 0; i < np; ++i) 
        for (int j = 0; j < nr; ++j) 
            cin >> mm[i][j];

    printf("Enter the Allocation matrix ");
    int alm[np][nr];
    for (int i = 0; i < np; ++i) 
        for (int j = 0; j < nr; ++j) 
            cin >> alm[i][j];
    
    printf("Enter the Need matrix ");
    int nm[np][nr];
    for (int i = 0; i < np; ++i) 
        for (int j = 0; j < nr; ++j) 
            cin >> nm[i][j];
    
    printf("Enter Process Number ");
    int pr;
    cin >> pr;

    printf("Enter the resourse request matrix ");
    int rrm[nr];
    for(int i=0;i<nr;i++)
        cin >> rrm[i];


    int f[np], ans[np], ind = 0;
    for (int k = 0; k < np; k++) {
        f[k] = 0;
    }
    int y = 0;
    for (int k = 0; k < 5; k++) {
        for (int i = 0; i < np; i++) {
            if (f[i] == 0) {
  
                int flag = 0;
                for (int j = 0; j < nr; j++) {
                    if (nm[i][j] > avm[j]){
                        flag = 1;
                        break;
                    }
                }
  
                if (flag == 0) {
                    ans[ind++] = i;
                    for (y = 0; y < nr; y++)
                        avm[y] += alm[i][y];
                    f[i] = 1;
                }
            }
        }
    }
    int cat=0;
    int fulfilled=0;

    for(int w=0;w<np;w++){
        if(f[w]==1)
            cat=1;
        else
            cat=0;
    }
    if (cat==1)
        printf("Safe State\n");
    else
        printf("Unsafe State\n");

    
    for(int q=0; q<nr;q++){
        if(rrm[q]<=avm[q] + alm[pr][q])
            fulfilled=1;
        else
            fulfilled=0;
    }
    if (fulfilled==1)
        printf("Request can be Fulfilled\n");
}