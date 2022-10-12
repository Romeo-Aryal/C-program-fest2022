#include <stdio.h>
/*
Chess is an abstract strategy game and involves no hidden information. 

It is played on a chessboard with 64 squares arranged in an eight-by-eight grid.
 At the start, each player controls sixteen pieces: one king, one queen, two rooks, two bishops, two knights, and eight pawns.
  The player who moves first controls white pieces, and the other controls black pieces. The object of the game is to checkmate the opponent's 
  king, whereby the king is under immediate attack (in "check") and there is no way for it to escape. 
  There are also several ways a game can end in a draw.*\





#include <conio.h>
#include <graphics.h>
void blk(int, int);
void display();
// enum bool{TRUE,FALSE};
/*void main() //MAIN FUNCTION
{
display();
getch();
} */
void display() // DISPLAY TO SHOW THE BOARD
{
    int gd = DETECT, gm, i, j, l, m, b;
    char pattern[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    int arrodd[32][2] = {{0, 0}, {100, 0}, {200, 0}, {300, 0}, {50, 50}, {150, 50}, {250, 50}, {350, 50}, {0, 100}, {100, 100}, {200, 100}, {300, 100}, {50, 150}, {150, 150}, {250, 150}, {350, 150}, {0, 200}, {100, 200}, {200, 200}, {300, 200}, {50, 250}, {150, 250}, {250, 250}, {350, 250}, {0, 300}, {100, 300}, {200, 300}, {300, 300}, {50, 350}, {150, 350}, {250, 350}, {350, 350}};
    int
        arrevn[33][2] = {{50, 0}, {150, 0}, {250, 0}, {350, 0}, {0, 50}, {100, 50}, {200, 50}, {300, 50}, {50, 100}, {150, 100}, {250, 100}, {350, 100}, {0, 150}, {100, 150}, {200, 150}, {300, 150}, {50, 200}, {150, 200}, {250, 200}, {350, 200}, {0, 250}, {100, 250}, {200, 250}, {300, 250}, {50, 300}, {150, 300}, {250, 300}, {350, 300}, {0, 350}, {100, 350}, {200, 350}, {300, 350}};
    clrscr();
    initgraph(&gd, &gm, "");
    for (i = 0; i <= 400; i = i + 50) // to draw vertical lines of the chess board.
    {
        line(i, 0, i, 400);
    }
    for (j = 0; j <= 400; j = j + 50) // to draw the horizontal lines of the chess
        board.
        {
            line(0, j, 400, j);
        }
    blk(420, 0);
    blk(420, 250);
    line(0, 430, 0, 460); // to draw the display at the bottom
    line(0, 430, 400, 430);
    line(0, 460, 400, 460);
    line(400, 430, 400, 460);
    settextstyle(7, HORIZ_DIR, 3);
    setfillpattern(&pattern, GREEN);
    for (b = 0; b <= 31; b++)
    {
        bar(arrodd[b][0], arrodd[b][1], arrodd[b][0] + 50, arrodd[b][1] + 50);
        rectangle(arrodd[b][0], arrodd[b][1], arrodd[b][0] + 50, arrodd[b][1] + 50);
    }
    setfillpattern(&pattern, DARKGRAY);
    for (m = 0; m <= 31; m++)
    {
        bar(arrevn[m][0], arrevn[m][1], arrevn[m][0] + 50, arrevn[m][1] + 50);
        rectangle(arrevn[m][0], arrevn[m][1], arrevn[m][0] + 50, arrevn[m][1] + 50);
    }
}
void blk(int q, int r)
{
    int y, z;
    for (y = q; y <= (q + 200); y = y + 50)
    {
        line(y, r, y, r + 200);
    }
    for (z = r; z <= (r + 200); z = z + 50)
    {
        line(q, z, q + 200, z);
    }
}
// Source file//
#include <akhchs.c> //we used akhchs.c as header file
#include <stdio.h>
#include <conio.h>
#include <dos.h>
char pos[8][8], color[8][8];
void assign(char *, char *);
struct block
{ // structure for every block
    int curx, cury;
    char clr, blkcolor;
};
union REGS i, o;                            // for hardware interaction
char getblkcolor(int, int, int, int, char); // functions prototype
char chkpawnmov(struct block *selected, int x3, int y3);
char chkrookmov(struct block *selected, int x3, int y3);
char chkknightmov(struct block *selected, int x3, int y3);
char chkbishopmov(struct block *selected, int x3, int y3);
char chkqueenmov(struct block *selected, int x3, int y3);
char chkkingmov(struct block *selected, int x3, int y3);
void checkpwn(int, int);
void main()
{
    int i1, j1, button, x, y, x1, y1, x2, y2, x3, y3, ch, i = 0, j = 0, z = 1, turn = 0;
    struct block
        *selected,
        pw[8], pb[8], rookw[2], rookb[2], bishopw[2], bishopb[2];
    struct block kingw, kingb, queenw, queenb, knightw[2], knightb[2];
    char id, nwblkclr, move = 'i';
    assign(pos, color);
    clrscr();
    display(); // for showing chess board
    design();
    setspare();                                         // for drawing rook etc.
    setposw(pw);                                        // sets position of black and
    setposb(pb);                                        // white pawns with color
    setposrw(rookw, bishopw, knightw, &kingw, &queenw); // sets position of
    whites
        setposrb(rookb, bishopb, knightb, &kingb, &queenb); // sete position of
    blacks
        // restrictmouseptr(0,0,400,400); //restricts pointer of mouse in
        the
            area specified there.showmouseptr();
    while (z)
    {
        i = i + 1;
        setcolor(WHITE);
        if (turn % 2 == 0) // means white's turn
            outtextxy(100, 430, "white's turn");
        else if (turn % 2 != 0) // means black's turn
            outtextxy(100, 430, "black's turn");
        while (i)
        {
            if (kbhit())
            {
                ch = getch();
 if(ch=='
') //escape at pressing enter.
 exit(0);
            }
            getmousepos(&button, &x, &y); // gets click position of mouse
            if ((button == 001))
            {
                sound(1000);
                i = i - 1;
                delay(50);
                nosound();
                delay(500);
            }
        }
        x1 = relposx(x) / 50;
        y1 = relposy(y) / 50;
        gotoxy(6, 28);
        if (x1 == pw[0].curx && y1 == pw[0].cury)
        {
            selected = &pw[0];
            id = 'p';
        }
        else if (x1 == pw[1].curx && y1 == pw[1].cury)
        {
            selected = &pw[1];
            id = 'p';
        }
        else if (x1 == pw[2].curx && y1 == pw[2].cury)
        {
            selected = &pw[2];
            id = 'p';
        }
        else if (x1 == pw[3].curx && y1 == pw[3].cury)
        {
            selected = &pw[3];
            id = 'p';
        }
        else if (x1 == pw[4].curx && y1 == pw[4].cury)
        {
            selected = &pw[4];
            id = 'p';
        }
        else if (x1 == pw[5].curx && y1 == pw[5].cury)
        {
            selected = &pw[5];
            id = 'p';
        }
        else if (x1 == pw[6].curx && y1 == pw[6].cury)
        {
            selected = &pw[6];
            id = 'p';
        }
        else if (x1 == pw[7].curx && y1 == pw[7].cury)
        {
            selected = &pw[7];
            id = 'p';
        }
        else if (x1 == pb[0].curx && y1 == pb[0].cury)
        {
            selected = &pb[0];
            id = 'p';
        }
        else if (x1 == pb[1].curx && y1 == pb[1].cury)
        {
            selected = &pb[1];
            id = 'p';
        }
        else if (x1 == pb[2].curx && y1 == pb[2].cury)
        {
            selected = &pb[2];
            id = 'p';
        }
        else if (x1 == pb[3].curx && y1 == pb[3].cury)
        {
            selected = &pb[3];
            id = 'p';
        }
        else if (x1 == pb[4].curx && y1 == pb[4].cury)
        {
            selected = &pb[4];
            id = 'p';
        }
        else if (x1 == pb[5].curx && y1 == pb[5].cury)
        {
            selected = &pb[5];
            id = 'p';
        }
        else if (x1 == pb[6].curx && y1 == pb[6].cury)
        {
            selected = &pb[6];
            id = 'p';
        }
        else if (x1 == pb[7].curx && y1 == pb[7].cury)
        {
            selected = &pb[7];
            id = 'p';
        }
        else if (x1 == rookw[0].curx && y1 == rookw[0].cury)
        {
            selected = &rookw[0];
            id = 'r';
        }
        else if (x1 == rookw[1].curx && y1 == rookw[1].cury)
        {
            selected = &rookw[1];
            id = 'r';
        }
        else if (x1 == rookb[0].curx && y1 == rookb[0].cury)
        {
            selected = &rookb[0];
            id = 'r';
        }
        else if (x1 == rookb[1].curx && y1 == rookb[1].cury)
        {
            selected = &rookb[1];
            id = 'r';
        }
        else if (x1 == bishopw[0].curx && y1 == bishopw[0].cury)
        {
            selected = &bishopw[0];
            id = 'b';
        }
        else if (x1 == bishopw[1].curx && y1 == bishopw[1].cury)
        {
            selected = &bishopw[1];
            id = 'b';
        }
        else if (x1 == bishopb[0].curx && y1 == bishopb[0].cury)
        {
            selected = &bishopb[0];
            id = 'b';
        }
        else if (x1 == bishopb[1].curx && y1 == bishopb[1].cury)
        {
            selected = &bishopb[1];
            id = 'b';
        }
        else if (x1 == kingw.curx && y1 == kingw.cury)
        {
            selected = &kingw;
            id = 'g';
        }
        else if (x1 == queenw.curx && y1 == queenw.cury)
        {
            selected = &queenw;
            id = 'q';
        }
        else if (x1 == kingb.curx && y1 == kingb.cury)
        {
            selected = &kingb;
            id = 'g';
        }
        else if (x1 == queenb.curx && y1 == queenb.cury)
        {
            selected = &queenb;
            id = 'q';
        }
        else if (x1 == knightw[0].curx && y1 == knightw[0].cury)
        {
            selected = &knightw[0];
            id = 'k';
        }
        else if (x1 == knightw[1].curx && y1 == knightw[1].cury)
        {
            selected = &knightw[1];
            id = 'k';
        }
        else if (x1 == knightb[0].curx && y1 == knightb[0].cury)
        {
            selected = &knightb[0];
            id = 'k';
        }
        else if (x1 == knightb[1].curx && y1 == knightb[1].cury)
        {
            selected = &knightb[1];
            id = 'k';
        }
        if ((turn % 2 == 0 && selected->clr == 'b') || (turn % 2 != 0 &&
                                                        selected->clr == 'w'))
            exit();
        turn = turn + 1;
        j = j + 1;
        while (j)
        {
            if (kbhit())
            {
                ch = getch();
 if(ch=='
') //escape at pressing enter.
 exit(0);
            }
            getmousepos(&button, &x2, &y2); // gets click position of mouse
            if ((button == 001))
            {
                sound(500);
                j = j - 1;
                delay(100);
                nosound();
                delay(500);
            }
        }
        x3 = relposx(x2) / 50;                                      // gives standard x coordinate
        y3 = relposy(y2) / 50;                                      // gives standard y coordinate
        nwblkclr = getblkcolor(x1, y1, x3, y3, selected->blkcolor); // get
        destination
            block's color; gotoxy(6, 28);
        bottom();      // clears bottom display
        if (id == 'p') // wheteher pawn?
        {
            move = chkpawnmov(selected, x3, y3);
            if (move == 'v')
            {
                draw(x3, y3, selected, nwblkclr, 'p');
                checkpwn(x3, y3);
            }
        }
        else if (id == 'r') // whether rook?
        {
            move = chkrookmov(selected, x3, y3);
            if (move == 'v')
            {
                draw(x3, y3, selected, nwblkclr, 'r');
            }
        }
        else if (id == 'k') // whether knight?
        {
            move = chkknightmov(selected, x3, y3);
            if (move == 'v')
            {
                draw(x3, y3, selected, nwblkclr, 'k');
            }
        }
        else if (id == 'b') // whether bishop?
        {
            move = chkbishopmov(selected, x3, y3);
            if (move == 'v')
            {
                draw(x3, y3, selected, nwblkclr, 'b');
            }
        }
        else if (id == 'q') // whether queen?
        {
            move = chkqueenmov(selected, x3, y3);
            if (move == 'v')
                draw(x3, y3, selected, nwblkclr, 'q');
        }
        else if (id == 'g') // whether king?
        {
            move = chkkingmov(selected, x3, y3);
            if (move == 'v')
                draw(x3, y3, selected, nwblkclr, 'g');
        }
        if (move == 'i')
            turn = turn - 1;
    }
    getch();
}
getmousepos(int *button, int *x, int *y) // gets mouse position.
{
    i.x.ax = 3;
    int86(0x33, &i, &o);
    *button = o.x.bx;
    *x = o.x.cx;
    *y = o.x.dx;
    return;
}
showmouseptr() // shows pointer in graphics mode.
{
    i.x.ax = 1;
    int86(0x33, &i, &o);
    return;
}
void hidemouseptr() // hides pointer
{
    i.x.ax = 0;
    int86(0x33, &i, &o);
    return;
}
restrictmouseptr(int x1, int y1, int x2, int y2) // restrict pointer
{
    i.x.ax = 7;
    i.x.cx = x1;
    i.x.dx = x2;
    int86(0x33, &i, &o);
    i.x.ax = 8;
    i.x.cx = y1;
    i.x.dx = y2;
    int86(0x33, &i, &o);
    return;
}
setposw(struct block *pawnw) // sete each white pawn.
{
    int count, togl;
    for (count = 0, togl = 0; count <= 7; count++, togl++)
    {
        pawnw->curx = count;
        pawnw->cury = 6;
        pawnw->clr = 'b';
        if (togl % 2 == 0)
            pawnw->blkcolor = 'g';
        else if (togl % 2 == 1)
            pawnw->blkcolor = 'm';
        pawnw++;
    }
    return;
}
setposb(struct block *pawnb) // sets each black pawn.
{
    int count, togl;
    for (count = 0, togl = 0; count <= 7; count++, togl++)
    {
        pawnb->curx = count;
        pawnb->cury = 1;
        pawnb->clr = 'w';
        if (togl % 2 == 0)
            pawnb->blkcolor = 'm';
        else if (togl % 2 == 1)
            pawnb->blkcolor = 'g';
        pawnb++;
    }
    return;
}
char chkpawnmov(struct block *selected, int x3, int y3)
{
    char mov, id, c;          // checks each pawn (black and white) move.
    id = pos[x3][y3];         // anybody?
    c = color[x3][y3];        // color?
    if (selected->clr == 'w') // white pawn?
    {
        if (x3 == selected->curx && y3 == selected->cury + 1) // move 1
        {
            if (id == 'n') // id is none when no body is there
                mov = 'v';
        }
        else if ((x3 == selected->curx + 1 || x3 == selected->curx - 1) &&
                 y3 == selected->cury + 1)
        {
            if (id != 'n' && c == 'b') // black present?
            {
                mov = 'v';
                send(id, c);
            }
        }
    }
    else if (selected->clr == 'b')
    {
        if (x3 == selected->curx && y3 == selected->cury - 1) // black and white
            both not there ?
            {
                if (id == 'n')
                    mov = 'v';
            }
        else if ((x3 == selected->curx - 1 || x3 == selected->curx + 1) &&
                 y3 == selected->cury - 1)
        {
            if (id != 'n' && c == 'w') // white there
            {
                mov = 'v'; // valid move
                send(id, c);
            }
        }
    }
    else
    { // no action at invalid move.
        mov = 'i';
    }
    return (mov);
}
setposrw(struct block *rookw, struct block *bishopw, struct block *knightw, struct block *kingw, struct block *queenw)
{ // it sets the white rook,knight,bishop etc.
    int i;
    rookw->curx = rookw->cury = 7;
    rookw->clr = 'w';
    rookw->blkcolor = 'm';
    rookw++;
    rookw->curx = 7;
    rookw->cury = 7;
    rookw->clr = 'w';
    rookw->blkcolor = 'g';
    bishopw->curx = 2;
    bishopw->cury = 7;
    bishopw->clr = 'w';
    bishopw->blkcolor = 'm';
    bishopw++;
    bishopw->curx = 5;
    bishopw->cury = 7;
    bishopw->clr = 'w';
    bishopw->blkcolor = 'g';
    knightw->curx = 1;
    knightw->cury = 7;
    knightw->clr = 'w';
    knightw->blkcolor = 'g';
    knightw++;
    knightw->curx = 6;
    knightw->cury = 7;
    knightw->clr = 'w';
    knightw->blkcolor = 'm';
    kingw->curx = 3;
    kingw->cury = 7;
    kingw->clr = 'w';
    kingw->blkcolor = 'm';
    queenw->curx = 4;
    queenw->cury = 7;
    queenw->clr = 'w';
    queenw->blkcolor = 'g';
    return;
}
setposrb(struct block *rookb, struct block *bishopb, struct block *knightb, struct block *kingb, struct block *queenb)
{ // it sets the current coords of black rook,bishop,knight etc.
    int i;
    rookb->curx = 0;
    rookb->cury = 0;
    rookb->clr = 'b';
    rookb->blkcolor = 'g';
    rookb++;
    rookb->curx = 7;
    rookb->cury = 0;
    rookb->clr = 'b';
    rookb->blkcolor = 'm';
    bishopb->curx = 2;
    bishopb->cury = 0;
    bishopb->clr = 'b';
    bishopb->blkcolor = 'g';
    bishopb++;
    bishopb->curx = 5;
    bishopb->cury = 0;
    bishopb->clr = 'b';
    bishopb->blkcolor = 'm';
    knightb->curx = 1;
    knightb->cury = 0;
    knightb->clr = 'b';
    knightb->blkcolor = 'm';
    knightb++;
    knightb->curx = 6;
    knightb->cury = 0;
    knightb->clr = 'b';
    knightb->blkcolor = 'g';
    kingb->curx = 3;
    kingb->cury = 0;
    kingb->clr = 'b';
    kingb->blkcolor = 'm';
    queenb->curx = 4;
    queenb->cury = 0;
    queenb->clr = 'b';
    queenb->blkcolor = 'g';
    return;
}
draw(int x3, int y3, struct block *selected, char nwblkclr, char id1)
{
    int nx3, ny3, ncx, ncy;
    nx3 = x3 * 50;
    ny3 = y3 * 50;
    ncx = (selected->curx) * 50;
    ncy = (selected->cury) * 50;
    if (nwblkclr == 'g') // CLEAR NEW POSITION
        setfillpattern(pattern, GREEN);
    else if (nwblkclr == 'm')
        setfillpattern(pattern, MAGENTA);
    hidemouseptr(); // necessary to avoid the effect of mouse pointer.
    bar(nx3, ny3, nx3 + 50, ny3 + 50);
    setcolor(WHITE);
    rectangle(nx3, ny3, nx3 + 50, ny3 + 50);
    if (selected->blkcolor == 'g') // CLEAR PREVIOUS POSITION
        setfillpattern(pattern, GREEN);
    else if (selected->blkcolor == 'm')
        setfillpattern(pattern, MAGENTA); // clear the previous pos.
    bar(ncx, ncy, ncx + 50, ncy + 50);
    setcolor(WHITE);
    rectangle(ncx, ncy, ncx + 50, ncy + 50);
    if (id1 == 'p') // if pawn was selected then draw the pawn at new
        position.
        {
            if (selected->clr == 'w')
                pawndraw(nx3, ny3, 0); // 0 for white.
            else if (selected->clr == 'b')
                pawndraw(nx3, ny3, 1);
        }
    else if (id1 == 'r') // if rook was selected
    {
        if (selected->clr == 'w')
            rookdraw(nx3, ny3, 0); // 0 for white.
        else if (selected->clr == 'b')
            rookdraw(nx3, ny3, 1);
    }
    else if (id1 == 'k') // if knight was selected
    {
        if (selected->clr == 'w')
            drawknite(nx3, ny3, 0); // 0 for white.
        else if (selected->clr == 'b')
            drawknite(nx3, ny3, 1);
    }
    else if (id1 == 'b') // if bishop was selected
    {
        if (selected->clr == 'w')
            drawbishop(nx3, ny3, 0); // 0 for white.
        else if (selected->clr == 'b')
            drawbishop(nx3, ny3, 1);
    }
    else if (id1 == 'g')
    {
        if (selected->clr == 'w')
            drawking(nx3, ny3, 0); // 0 for white.
        else if (selected->clr == 'b')
            drawking(nx3, ny3, 1);
    }
    else if (id1 == 'q')
    {
        if (selected->clr == 'w')
            drawqueen(nx3, ny3, 0); // 0 for white.
        else if (selected->clr == 'b')
            drawqueen(nx3, ny3, 1);
    }
    showmouseptr();
    pos[selected->curx][selected->cury] = 'n';
    color[selected->curx][selected->cury] = 'n'; // welcome back mr.
    pointer.selected->curx = x3;
    selected->cury = y3;
    selected->blkcolor = nwblkclr;
    pos[x3][y3] = id1;
    color[x3][y3] = selected->clr;
    return;
}
char chkrookmov(struct block *selected, int x3, int y3)
{ // checks rook move for black and white as both have
    same
        moves.int i;
    char id, c, mov = 'v';
    if ((x3 == selected->curx) || (y3 == selected->cury))
    {
        if (x3 > selected->curx && y3 == selected->cury)
        {
            for (i = selected->curx + 1; i < x3; i++)
            {
                id = pos[i][y3];
                // c=color[i][y3];
                if (id != 'n') // if black or white present move is invalid
                {
                    mov = 'i';
                }
            }
        }
        else if (x3 < selected->curx && y3 == selected->cury)
        {
            for (i = selected->curx - 1; i > x3; i--)
            {
                id = pos[i][y3];
                // c=color[i][y3];
                if (id != 'n') // if black or white
                {
                    mov = 'i';
                }
            }
        }
        else if (x3 == selected->curx && y3 > selected->cury)
        {
            for (i = selected->cury + 1; i < y3; i++)
            {
                id = pos[x3][i];
                // c=color[x3][i];
                if (id != 'n') // if black or white
                {
                    mov = 'i';
                }
            }
        }
        else if (x3 == selected->curx && y3 < selected->cury)
        {
            for (i = selected->cury - 1; i > y3; i--)
            {
                id = pos[x3][i];
                // c=color[x3][i];
                if (id != 'n') // if black or white
                {
                    mov = 'i';
                }
            }
        }
        if (mov == 'v')
        {
            id = pos[x3][y3];
            c = color[x3][y3];
            if (id != 'n' && c == 'b' && selected->clr == 'w') // means black
                at
                    x3,
                    y3
                {
                    mov = 'v';
                    send(id, c);
                }
            else if (id != 'n' && c == 'w' && selected->clr == 'b') // means white
                there
                {
                    mov = 'v';
                    send(id, c);
                }
            else if (id == 'n') // none of the white or black even at x3 & y3?
                mov = 'v';
            else
                mov = 'i';
        }
    }
    else
        mov = 'i';
    return (mov);
}
char chkknightmov(struct block *selected, int x3, int y3)
{
    // knight's moves are not affected if some entity lies in the way.
    // it just jumps over them.Atmost only eight moves are possible.
    int i, posk[8][2];
    char id, c, mov = 'i';
    posk[0][0] = selected->curx + 1;
    posk[0][1] = selected->cury - 2;
    posk[1][0] = selected->curx - 1;
    posk[1][1] = selected->cury - 2;
    posk[2][0] = selected->curx + 1;
    posk[2][1] = selected->cury + 2;
    posk[3][0] = selected->curx - 1;
    posk[3][1] = selected->cury + 2;
    posk[4][0] = selected->curx + 2;
    posk[4][1] = selected->cury - 1;
    posk[5][0] = selected->curx + 2;
    posk[5][1] = selected->cury + 1;
    posk[6][0] = selected->curx - 2;
    posk[6][1] = selected->cury + 1;
    posk[7][0] = selected->curx - 2;
    posk[7][1] = selected->cury - 1;
    for (i = 0; i <= 7; i++)
    {
        if (x3 == posk[i][0] && y3 == posk[i][1])
        {
            id = pos[x3][y3];
            c = color[x3][y3];
            if (id != 'n' && c == 'b' && selected->clr == 'w')
            {
                mov = 'v'; // means black is there.
                send(id, c);
            }
            else if (id != 'n' && c == 'w' && selected->clr == 'b')
            {
                mov = 'v'; // means white is there.
                send(id, c);
            }
            else if (id == 'n')
                mov = 'v'; // means it is blank.
        }
    }
    return (mov);
}
char chkbishopmov(struct block *selected, int x3, int y3)
{
    int m, n, m1, n1, i, j;
    char mov, id, c;
    m = x3 - selected->curx;
    n = y3 - selected->cury;
    if (abs(m) == abs(n))
    {
        if (m > 0 && n < 0) // move 1
        {
            for (i = selected->curx + 1, j = selected->cury - 1; (i < x3 && j > y3); i = i++, j--)
            {
                id = pos[i][j];
                // c=color[i][j];
                if (id != 'n')
                    mov = 'i';
            }
        }
        if (m > 0 && n > 0) // move 2
        {
            for (i = selected->curx + 1, j = selected->cury + 1; (i < x3 && j < y3); i++, j++)
            {
                id = pos[i][j];
                // c=color[i][j];
                if (id != 'n')
                    mov = 'i';
            }
        }
        if (m < 0 && n < 0) // move 3
        {
            for (i = selected->curx - 1, j = selected->cury - 1; (i != x3 && j != y3); i--, j--)
            {
                id = pos[i][j];
                // c=color[i][j];
                if (id != 'n')
                    mov = 'i';
            }
        }
        if (m < 0 && n > 0) // move 4
        {
            for (i = selected->curx - 1, j = selected->cury + 1; (i > x3 && j < y3); i--, j++)
            {
                id = pos[i][j];
                // c=color[i][j];
                if (id != 'n')
                    mov = 'i';
            }
        }
        if (mov != 'i') //..that no body is in the way,now at x3 y3?
        {
            id = pos[x3][y3];
            c = color[x3][y3];
            if (id != 'n' && c == 'b') // means black at x3,y3
            {
                if (selected->clr == 'w')
                {
                    mov = 'v';
                    send(id, c);
                }
                else
                    mov = 'i';
            }
            else if (id != 'n' && c == 'w') // means white there
            {
                if (selected->clr == 'b')
                {
                    mov = 'v';
                    send(id, c);
                }
                else
                {
                    mov = 'i';
                }
            }
            else if (id == 'n') // none of the white or black even at x3 & y3?
                mov = 'v';
        }
    } // means not at the x cross.
    else
    {
        mov = 'i';
    }
    return (mov);
}
char chkqueenmov(struct block *selected, int x3, int y3)
{
    char mov1, mov2, mov3 = 'i', id, c;
    mov1 = chkrookmov(selected, x3, y3);
    mov2 = chkbishopmov(selected, x3, y3);
    if (mov1 == 'v' || mov2 == 'v') // move is valid and color is
        checked already.
        {
            mov3 = 'v';
        }
    return (mov3);
}
char chkkingmov(struct block *selected, int x3, int y3)
{
    char id, c, mov = 'i';
    id = pos[x3][y3];
    c = pos[x3][y3];
    if (x3 == selected->curx + 1 && y3 == selected->cury - 1) // move 1
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx - 1 && y3 == selected->cury - 1) // move 2
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx - 1 && y3 == selected->cury + 1) // move 3
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx + 1 && y3 == selected->cury + 1) // move 4
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx + 1 && y3 == selected->cury) // move 5
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx && y3 == selected->cury - 1) // move 6
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx - 1 && y3 == selected->cury) // move 7
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else if (x3 == selected->curx && y3 == selected->cury + 1) // move 8
    {
        if (id == 'n')
            mov = 'v';
        else if (selected->clr == 'w' && id != 'n' && c == 'b') // means black there.
        {
            mov = 'v';
            send(id, c);
        }
        else if (selected->clr == 'b' && id != 'n' && c == 'w') // means white there.
        {
            mov = 'v';
            send(id, c);
        }
    }
    else // means move is not valid
    {


        mov = 'i';


    }
    return (mov);
}
void assign(char *post, char *col)
{
    int i;
    char
        val1[64] = {"rpnnnnprkpnnnnpkbpnnnnpbgpnnnnpqqpnnnnpgbpnnnnpbkpnnnnpkrpnnnnpr"};
    char
        val2[64] = {"wwnnnnbbwwnnnnbbwwnnnnbbwwnnnnbbwwnnnnbbwwnnnnbbwwnnnnbbwwnnnnbb"};
    for (i = 0; i <= 63; i++, post++, col++)
    {
        *post = val1[i];
        *col = val2[i];
    }
}
void checkpwn(int x3, int y3)
{
    char a;
    a = color[x3][y3]; // whether pawn is white or black?
    bottom();
    setcolor(WHITE);
    if (a == 'w' && (x3 >= 0 && x3 <= 7) && y3 == 7)
    {
        outtextxy(100, 430, "well done white..press w");
        getch();
        bottom();
    }
    else if (a == 'b' && (x3 >= 0 && x3 <= 7) && y3 == 0)
    {
        outtextxy(100, 430, "well done black..press b");
        getch();
        bottom();
    }





    return;
}