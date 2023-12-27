#include <stdio.h>

int main(void)
{
    int king, queen, rook, bishop, knight, pawn;
    int rking, rqueen, rrook, rbishop, rknight, rpawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    rking = 1 - king;
    rqueen = 1 - queen;
    rrook = 2 - rook;
    rbishop = 2 - bishop;
    rknight = 2 - knight;
    rpawn = 8 - pawn;
    printf("%d %d %d %d %d %d\n", rking, rqueen, rrook, rbishop, rknight, rpawn);
    return 0;
}