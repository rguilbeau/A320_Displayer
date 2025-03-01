#ifndef A320_DISPLAYER_H
#define A320_DISPLAYER_H

#include "Arduino.h"
#include <Adafruit_SSD1306.h>
#include "fonts/Nimbus_Sans_L_Bold_16.h"
#include "fonts/DSEG7_Classic_Mini_Bold_25.h"

class Displayer
{
public:
    void begin(const uint8_t &nAddress);

    void setContrast(const uint8_t &nValue); 
    void setTestLight(const bool &bTestLight);
    void setPowerOn(const bool &bPowerOn);
    
    void loop();

protected:
    explicit Displayer(Adafruit_SSD1306 *pScreen, const uint8_t &nIndexDisplay);
    explicit Displayer(Adafruit_SSD1306 *pScreen);
    virtual ~Displayer() = default;
    
    Adafruit_SSD1306 *m_pScreen;

    int8_t m_nIndexDisplay;

    
    virtual bool checkMutation() = 0;
    virtual void display() = 0;
    virtual void displayTestLight() = 0;


    String leftPad(const int &nValue, const int &Size);

    
private:
    static int8_t m_nSelectedScreen;

    unsigned long m_nLastUpdate = 0;

    bool m_bTestLight = false;
    bool m_bPowerOn = false;
    uint8_t m_nContrast = 0;
    uint8_t m_nLastContrast = 0;

    bool m_bInternalMutation = true;

    void selectScreen();
};

#endif