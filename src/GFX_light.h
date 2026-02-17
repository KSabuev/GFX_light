#ifndef _GFX_light_H_
#define _GFX_light_H_

#include "Arduino.h"
#include "Print.h"

#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

class GFX_light : public Print {
public:
  int16_t WIDTH, HEIGHT;
  uint8_t rotation; 
  
  GFX_light(int16_t w, int16_t h);
  
  virtual void drawPixel(int16_t x, int16_t y, uint16_t color) = 0;
  virtual void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) = 0;
  
  void drawFastVLine(int16_t x, int16_t y, int16_t h, uint16_t color);
  void drawFastHLine(int16_t x, int16_t y, int16_t w, uint16_t color);
  void fillScreen(uint16_t color);
  
  void setRotation(uint8_t r);
  virtual void invertDisplay(boolean i);
  
  void setCursor(int16_t x, int16_t y);
  void setTextSize(uint8_t s);
  void setTextColor(uint16_t c);
  void setTextColor(uint16_t c, uint16_t bg);
  void setTextWrap(boolean w);
  
  int16_t getCursorX() const;
  int16_t getCursorY() const;
  int16_t width(void) const;
  int16_t height(void) const;
  
  virtual size_t write(uint8_t c);

protected:
  int16_t _width, _height;
  int16_t _cursorX, _cursorY;
  uint8_t _textSize;
  uint16_t _textColor, _textBgColor;
  boolean _textWrap;
  
private:
  void charBounds(char c, int16_t x, int16_t y, int16_t *w, int16_t *h);
  void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color, 
                uint16_t bg, uint8_t size);
};

#endif
