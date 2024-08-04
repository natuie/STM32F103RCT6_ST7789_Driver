#ifndef __LCD_H
#define __LCD_H		
#include "sys.h"


void LCD_Fill(u16 xsta,u16 ysta,u16 xend,u16 yend,u16 color);//指定区域填充颜色
void LCD_DrawPoint(u16 x,u16 y,u16 color);//在指定位置画一个点
void LCD_DrawLine(u16 x1,u16 y1,u16 x2,u16 y2,u16 color);//在指定位置画一条线
void LCD_DrawRectangle(u16 x1, u16 y1, u16 x2, u16 y2,u16 color);//在指定位置画一个矩形
void LCD_Draw_Circle(u16 x0,u16 y0,u8 r,u16 color);//在指定位置画一个圆

void LCD_ShowChinese(u16 x,u16 y,u8 *s,u16 fc,u16 bc,u8 sizey,u8 mode);//显示汉字串
void LCD_ShowChinese12x12(u16 x,u16 y,u8 *s,u16 fc,u16 bc,u8 sizey,u8 mode);//显示单个12x12汉字
void LCD_ShowChinese16x16(u16 x,u16 y,u8 *s,u16 fc,u16 bc,u8 sizey,u8 mode);//显示单个16x16汉字
void LCD_ShowChinese24x24(u16 x,u16 y,u8 *s,u16 fc,u16 bc,u8 sizey,u8 mode);//显示单个24x24汉字
void LCD_ShowChinese32x32(u16 x,u16 y,u8 *s,u16 fc,u16 bc,u8 sizey,u8 mode);//显示单个32x32汉字

void LCD_ShowChar(u16 x,u16 y,u8 num,u16 fc,u16 bc,u8 sizey,u8 mode);//显示一个字符
void LCD_ShowString(u16 x,u16 y,const u8 *p,u16 fc,u16 bc,u8 sizey,u8 mode);//显示字符串
u32 mypow(u8 m,u8 n);//求幂
void LCD_ShowIntNum(u16 x,u16 y,u16 num,u8 len,u16 fc,u16 bc,u8 sizey);//显示整数变量
void LCD_ShowFloatNum1(u16 x,u16 y,float num,u8 len,u16 fc,u16 bc,u8 sizey);//显示两位小数变量

void LCD_ShowPicture(u16 x,u16 y,u16 length,u16 width,const u8 pic[]);//显示图片


//画笔颜色
#define ST7789_BLACK 0x0000
#define ST7789_WHITE 0xFFFF
#define ST7789_RED 0xF800
#define ST7789_GBLUE 0X07FF
#define ST7789_GREEN 0x07E0
#define ST7789_BLUE 0x001F
#define ST7789_CYAN 0x07FF
#define ST7789_MAGENTA 0xF81F
#define ST7789_YELLOW 0xFFE0
#define ST7789_ORANGE 0xFD20
#define ST7789_BROWN 0xBC40
#define ST7789_GRAY 0x8410
#define ST7789_DARK_GRAY 0x4208
#define ST7789_BRRED 			 0XFC07 //棕红色
#define ST7789_DARKBLUE      	 0X01CF	//深蓝色
#define ST7789_LIGHTBLUE      	 0X7D7C	//浅蓝色  
#define ST7789_GRAYBLUE       	 0X5458 //灰蓝色
#define ST7789_LIGHTGREEN     	 0X841F //浅绿色
#define ST7789_LGRAY 			 0XC618 //浅灰色(PANNEL),窗体背景色
#define ST7789_LGRAYBLUE         0XA651 //浅灰蓝色(中间层颜色)
#define ST7789_LBBLUE            0X2B12 //浅棕蓝色(选择条目的反色)


#endif





