#include "U8glib.h"

U8GLIB_SH1106_128X64 oled(U8G_I2C_OPT_NONE);

void setup(void) {
  oled.begin();
}

void loop(void) {
  oled.firstPage();
  do {
    page1();
  } while (oled.nextPage());
  delay(5000);

  oled.firstPage();
  do {
    page2();
  } while (oled.nextPage());
  delay(5000);
  }

void page1(void) {
  oled.setFont(u8g_font_profont12);
  oled.setPrintPos(0, 10);
  oled.print("ISHNIDER IS GOOD");
  oled.setPrintPos(0, 25);
  oled.print("HE IS GREAT");
  oled.setPrintPos(0, 40);
  oled.print("HE IS HANDSOME");
  oled.setPrintPos(0, 55);
  oled.print("HE IS ISHNIDER");
}

void page2(void) {
  oled.setFont(u8g_font_profont11);
  oled.setPrintPos(0, 10);
  oled.print("EKAM SINGH IS THE");
  oled.setPrintPos(0, 25);
  oled.print("BEST PERSON");
  oled.setPrintPos(0, 40);
  oled.print("IN THIS WORLD");
  oled.setPrintPos(0, 55);
  oled.print("HE IS MAAHAN");
}

