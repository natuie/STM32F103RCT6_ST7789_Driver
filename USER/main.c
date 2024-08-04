#include "delay.h"
#include "sys.h"
#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"

int main(void)
{
	float t=0;
	delay_init();
	LED_Init();//LED��ʼ��
	LCD_Init();//LCD��ʼ��
	LCD_Fill(0,0,LCD_W,LCD_H,ST7789_WHITE); //�������
	LED0=0;
	while(1)
	{
		LCD_ShowChinese(8,60,"�Ƽ�",ST7789_RED,ST7789_WHITE,16,0);//����
		LCD_ShowFloatNum1(20,80,t,4,ST7789_RED,ST7789_WHITE,16);//��������
		LCD_ShowString(20, 100, "Hello", ST7789_GRAY,ST7789_WHITE,16,0);
		t+=0.11;  //��ֵ�ı� ѭ��
		//LED0=!LED0;
		LCD_ShowPicture(65,80,40,40,gImage_1); //ͼƬ
		LCD_DrawLine(0, 125,240, 125, ST7789_BLACK);//��
		LCD_Draw_Circle(45, 175, 35, ST7789_GREEN);//Բ
		delay_ms(200);
	}
}
