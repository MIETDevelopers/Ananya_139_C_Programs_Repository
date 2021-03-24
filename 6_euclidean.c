#include <stdio.h>
#include <conio.h>
#include <math.h>

int getDistance (int x1, int y1, int x2, int y2)
{
    double distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
    distance = sqrt(distance);

    return (int)distance;
}

int main() {

    int k[5][2],s[5][2];
    int i=0,j=0,p=0,z=0,x1,x2,y1,y2;

    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            printf("enter coordinates");
            scanf("%d",&k[i][j]);
        }
    }

    //populate array
    int distances [5][5];

    for (i = 0; i < 5; i++) //rows
    {
        for (j = 0; j < 5; j++) //cols
        {
            distances[i][j] = getDistance(k[i][0], k[i][1], k[j][0], k[j][1]);
        }
    }

    //print distances
    for (i = 0; i < 5; i++) //rows
    {
        for (j = 0; j < 5; j++) //cols
        {
            printf("%d ", distances[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            printf("%d\t",k[i][j]);
        }
        printf("\n");
    }
    return 0;
}
