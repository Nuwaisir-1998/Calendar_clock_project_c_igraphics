# include "iGraphics.h"
# include <time.h>

int day, date = 1, month =0, year = -2 ;
int ly;
int r1, r2;
char a[]= {'0','1'};
char str[100], str2[100], str3[100];
int len;
int mode1;
int mode2;
int s, d, hour, mi, sec, secf, hourf, mif;

void timeplus()
{
    secf++;
    if(secf>59)
    {
        secf = 0;
        mif++;
    }
    if(mif>59)
    {
        mif = 0;
        hourf++;
    }
    if(hourf>23)
    {
        hourf = 0;
    }
    printf("%d : ", hourf);
    printf("%d : ", mif);
    printf("%d\n", secf);
}

void print1(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 70, y1, 4, 70);
}
void print2(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print3(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print4(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
}
void print5(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print6(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print7(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 70, y1, 4, 70);
}
void print8(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print9(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 4, y1 + 70, 65, 4);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}
void print0(int x1, int y1)
{
    iSetColor(0,0,200);
    iFilledRectangle(x1 + 4, y1 + 145, 65, 4);
    iFilledRectangle(x1 + 70, y1 + 75, 4, 70);
    iFilledRectangle(x1, y1 + 75, 4, 70);
    iFilledRectangle(x1 + 70, y1, 4, 70);
    iFilledRectangle(x1, y1, 4, 70);
    iFilledRectangle(x1 + 4, y1 - 4, 65, 4);
}

void drawTextBox(int r1, int r2)
{
    iRectangle(r1, r2, 250, 30);
}


int isleapyear(int y)
{
    if(y%400 == 0 || ((y % 100 != 0) && (y % 4 ==0)))

    {
        return 1;
    }
    else return 0;
}
int daydet(int m, int y)
{
    int h;
    int q = 1;
    if(m == 1)
    {
        m = 13;
        y = y-1;
    }
    if(m == 2)
    {
        m = 14;
        y = y-1;
    }
    h = (q + (26*(m+1) / 10) + y + (y / 4) + 6 * (y / 100) + (y / 400))%7;
    return h;
}

void iDraw()
{
    iClear();
    day = daydet(month,year);
    int i,l1=70, l2 = 50, la=73, lb = 53, x1=120 + day * 100, y1=600;
    for(i=1; i<=8; i++)
    {
        iSetColor(20, 200, 0);
        iLine(l1,50,l1,750);
        l1 = l1 + 100;
    }
    for(i=0; i<=7; i++)
    {
        iLine(70,l2,770,l2);
        l2 = l2 + 100;
    }
    for(i=1; i<=8; i++)
    {
        iSetColor(20,200, 0);
        iLine(la,50,la,750);
        la = la + 100;
    }
    for(i=0; i<=7; i++)
    {
        iLine(70,lb,770,lb);
        lb = lb + 100;
    }
    iSetColor(200, 20, 0);
    iText(90, 700, "SAT",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(190, 700, "SUN",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(290, 700, "MON",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(390, 700, "TUES",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(490, 700, "WED",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(590, 700, "THUR",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(690, 700, "FRI",GLUT_BITMAP_TIMES_ROMAN_24);
    for(i=1; i<=31; i++)
    {
        if(i < 9)
        {
            a[0] = '0';
        }
        if(i > 9)
        {
            a[0] = '1';
        }
        if(i >19)
        {
            a[0] = '2';
        }
        if(i>29)
        {
            a[0] = '3';
            a[1] = '0' + i - 30;
        }
        if(i < 10)
        {
            a[1] = '0' + i;
        }
        if(i>9 && i<20)
        {
            a[1] = '0' + i - 10;
        }
        if(i>19 && i< 30)
        {
            a[1] = '0' + i - 20;
        }
        iText(x1, y1, a, GLUT_BITMAP_TIMES_ROMAN_24);
        x1 = x1 + 100;
        if(x1 > 775)
        {
            x1 = 120;
            y1 = y1 - 100;
        }
        ly = isleapyear(year);
        if(i>28 && ly == 1 && month == 2)
        {
            break;
        }
        if(i>27 && ly == 0 && month == 2)
        {
            break;
        }
        if(i > 29 && (month == 4 || month == 6 || month == 8 || month == 9 || month == 11 ))
        {
            break;
        }
    }
    if((mode1 == 0 && mode2 == 1) || (mode1 == 1 && mode2 == 0) || year == -2 || year == 0 || month > 12 || month < 1)
    {
        iClear();
    }
    iText(50,1010,"First press the month box and give the month number as input. For example: 1(January), 3(March).",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(50,980,"Then Press Enter!",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(50,950,"Then press the year box and give the year number as input. Press ENTER!",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(50,920,"The calendar of that month will appear!",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(480, 820, "MONTH :",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(80, 820, "YEAR      :",GLUT_BITMAP_TIMES_ROMAN_24);
    iSetColor(20, 200, 0);
    if(mode1 == 1)
    {
        iSetColor(20, 20, 250);
    }
    drawTextBox(590, 815);
    if(mode1 == 1)
    {
        iText(670, 820, str, GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(mode2 == 1 && mode1 == 0)
    {
        iText(670, 820, str2, GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(mode2 == 1)
    {
        iSetColor(250, 20, 20);
    }
    drawTextBox(190, 815);
    if(mode2 == 1)
    {
        iText(290, 820, str, GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(mode1 == 0 && mode2 == 0 )
    {
        iText(670, 820, str2, GLUT_BITMAP_TIMES_ROMAN_24);
        iText(290, 820, str3, GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(mode1 == 1 && mode2 == 0 )
    {
        iText(290, 820, str3, GLUT_BITMAP_TIMES_ROMAN_24);
    }

    if(month > 12 || year <= 0 || month < 1)
    {
        iText(200,500,"Please Enter a valid MONTH and YEAR",GLUT_BITMAP_TIMES_ROMAN_24);
    }
    if(secf % 10 == 1)
    {
        print1(1350,500);
    }
    if(secf % 10 == 2)
    {
        print2(1350,500);
    }
    if(secf % 10 == 3)
    {
        print3(1350,500);
    }
    if(secf % 10 == 4)
    {
        print4(1350,500);
    }
    if(secf % 10 == 5)
    {
        print5(1350,500);
    }
    if(secf % 10 == 6)
    {
        print6(1350,500);
    }
    if(secf % 10 == 7)
    {
        print7(1350,500);
    }
    if(secf % 10 == 8)
    {
        print8(1350,500);
    }
    if(secf % 10 == 9)
    {
        print9(1350,500);
    }
    if(secf % 10 == 0)
    {
        print0(1350,500);
    }
    if(secf / 10 == 1)
    {
        print1(1250,500);
    }
    if(secf / 10 == 2)
    {
        print2(1250,500);
    }
    if(secf / 10 == 3)
    {
        print3(1250,500);
    }
    if(secf / 10 == 4)
    {
        print4(1250,500);
    }
    if(secf / 10 == 5)
    {
        print5(1250,500);
    }
    if(secf / 10 == 0)
    {
        print0(1250,500);
    }
    if(mif % 10 == 0)
    {
        print0(1150,500);
    }
    if(mif % 10 == 1)
    {
        print1(1150,500);
    }
    if(mif % 10 == 2)
    {
        print2(1150,500);
    }
    if(mif % 10 == 3)
    {
        print3(1150,500);
    }
    if(mif % 10 == 4)
    {
        print4(1150,500);
    }
    if(mif % 10 == 5)
    {
        print5(1150,500);
    }
    if(mif % 10 == 6)
    {
        print6(1150,500);
    }
    if(mif % 10 == 7)
    {
        print7(1150,500);
    }
    if(mif % 10 == 8)
    {
        print8(1150,500);
    }
    if(mif % 10 == 9)
    {
        print9(1150,500);
    }
    if(mif / 10 == 0)
    {
        print0(1050,500);
    }
    if(mif / 10 == 1)
    {
        print1(1050,500);
    }
    if(mif / 10 == 2)
    {
        print2(1050,500);
    }
    if(mif / 10 == 3)
    {
        print3(1050,500);
    }
    if(mif / 10 == 4)
    {
        print4(1050,500);
    }
    if(mif / 10 == 5)
    {
        print5(1050,500);
    }
    if(hourf % 10 == 0)
    {
        print0(950,500);
    }
    if(hourf % 10 == 1)
    {
        print1(950,500);
    }
    if(hourf % 10 == 2)
    {
        print2(950,500);
    }
    if(hourf % 10 == 3)
    {
        print3(950,500);
    }
    if(hourf % 10 == 4)
    {
        print4(950,500);
    }
    if(hourf % 10 == 5)
    {
        print5(950,500);
    }
    if(hourf % 10 == 6)
    {
        print6(950,500);
    }
    if(hourf % 10 == 7)
    {
        print7(950,500);
    }
    if(hourf % 10 == 8)
    {
        print8(950,500);
    }
    if(hourf % 10 == 9)
    {
        print9(950,500);
    }
    if(hourf / 10 == 1)
    {
        print1(850,500);
    }
    if(hourf / 10 == 2)
    {
        print2(850,500);
    }
    if(hourf / 10 == 0)
    {
        print0(850,500);
    }
    iSetColor(255,0,0);
    iFilledRectangle(1030, 525, 2,10);
    iFilledRectangle(1030, 590, 2,10);
    iFilledRectangle(1230, 525, 2,10);
    iFilledRectangle(1230, 590, 2,10);
    iSetColor(250,0,0);
    iRectangle(800,450,700,250);
}
void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);
}
void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        if(mx >= 590 && mx <= 840 && my >= 815 && my <= 945 && mode1 == 0 && mode2 == 0)
        {
            mode1 = 1;
        }
        if(mx >= 190 && mx <= 440 && my >= 815 && my <= 945 && mode2 == 0 && mode1 == 0)
        {
            mode2 = 1;
        }
    }
}
void iKeyboard(unsigned char key)
{
    int i;
    if(mode1 == 1)
    {
        if(key == '\r')
        {
            mode1 = 0;
            strcpy(str2, str);
            month = atoi(str2);
            printf("%s\n", str2);
            for(i = 0; i < len; i++)
            {
                str[i] = 0;
            }
            len = 0;
        }
        else
        {
            str[len] = key;
            len++;
        }
    }
    if(mode2 == 1)
    {
        if(key == '\r')
        {
            mode2 = 0;
            strcpy(str3, str);
            year = atoi(str3);
            printf("%s\n", str3);
            for(i = 0; i < len; i++)
            {
                str[i] = 0;
            }
            len = 0;
        }
        else
        {
            str[len] = key;
            len++;
        }
    }
}
void iSpecialKeyboard(unsigned char key)
{
    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
}
int main()
{
    len = 0;
    mode1 = 0;
    mode2 = 0;
    str[0]= 0;
    time_t s, d, hour, mi, sec;
    s = time(NULL);
    d = (s + 21600) % 86400;
    hour = d / 3600;
    mi = (d % 3600) / 60;
    sec = (d % 3600) % 60;
    secf = sec;
    mif = mi;
    hourf = hour;
    iSetTimer(1000,timeplus);
    iInitialize(1550, 900, "Calender and Clock");
    return 0;
}
