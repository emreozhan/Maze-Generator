#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    srand(time(NULL));

    int MazeRoom=0;
    int MazeSqr=0;
    int MazeArray[100][100];
int ii=0,jj=0;
    for(ii=0;ii<MazeRoom;ii++){for(jj=0;jj< MazeRoom;jj++){MazeArray[ii][jj]=-99;}}




    printf("Maze Room Size (Exp: For 10x10 Maze enter:100)");
    scanf("%d",&MazeRoom);
    MazeSqr=sqrt(MazeRoom);

    int CurruntRoom,fff;
    int rn=0;
    int sol=0,sag=0,ust=0,alt=0;
int icSayac=0;
    for(CurruntRoom=0;CurruntRoom<MazeRoom ;CurruntRoom++)
    {
        icSayac=0;
        sol=CurruntRoom-1;
        sag=CurruntRoom+1;
        ust=CurruntRoom-MazeSqr;
        alt=CurruntRoom+MazeSqr;

        rn=rand()%2;
        if(sol%MazeSqr!=0 ||  rn==1  ){
        MazeArray[CurruntRoom][icSayac]=sol;
        icSayac++;
        }

        rn=rand()%2;
        if(sag%MazeSqr!=MazeSqr-1 ||  rn==1  ){
        MazeArray[CurruntRoom][icSayac]=sag;
        icSayac++;
        }

        rn=rand()%2;
        if(ust/MazeSqr!=0 ||  rn==1  ){
        MazeArray[CurruntRoom][icSayac]=ust;
        icSayac++;
        }

        rn=rand()%2;
        if(alt/MazeSqr!=MazeSqr-1 ||  rn==1  ){
        MazeArray[CurruntRoom][icSayac]=alt;
        icSayac++;
        }




    }


for(ii=0;ii<MazeRoom;ii++)
   {
    for(jj=0;jj<4;jj++)
        {

            printf(" %d ",MazeArray[ii][jj]);
        }
      printf("\n") ;
   }





    return 0;
}
