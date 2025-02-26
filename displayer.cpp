#include "displayer.hpp"

/**
 * @brief L'écran actuellement séléctionnée sur le multiplexeur I2C
 * 
 */
int8_t Displayer::m_nSelectedScreen = -1;

/**
 * @brief Construction de l'afficheur pour un écran OLED avec multiplexeur I2C (écran indexé)
 * 
 * @param pScreen Le driver Adafruit_SSD1306 pour le pilotage de l'écran
 * @param nIndexDisplay L'index de l'écran sur le multiplexer I2C
 */
Displayer::Displayer(Adafruit_SSD1306 *pScreen, const uint8_t &nIndexDisplay)
{
    m_pScreen = pScreen;
    m_nIndexDisplay = nIndexDisplay;
}

/**
 * @brief Construction de l'afficheur pour un écran OLED sans multiplexeur I2C
 * 
 * @param pScreen Le driver Adafruit_SSD1306 pour le pilotage de l'écran
 */
Displayer::Displayer(Adafruit_SSD1306 *pScreen)
{
    m_pScreen = pScreen;
    m_nIndexDisplay = -1;
}

/**
 * @brief Afifiche "init display" sur l'écran
 * 
 */
void Displayer::begin(const uint8_t &nAddress)
{
    selectScreen();
    m_pScreen->begin(SSD1306_EXTERNALVCC, nAddress);
    
    m_pScreen->setContrast(100);
    
    m_pScreen->setTextColor(SSD1306_WHITE);

    m_pScreen->clearDisplay();
    m_pScreen->setRotation(2);
    m_pScreen->display();    
}

void Displayer::displayNone()
{
    selectScreen();
    m_pScreen->clearDisplay();
    m_pScreen->display(); 
}

/**
 * @brief Ajoute les "leading zero"
 * 
 * @param nValue La valeurs à laquelle ajouter les "leading zero"
 * @param nSize Le nombre de charactère total de la chaine de caractère voulu
 * @return String Le chaine de caractère avec les "leading zero"
 */
String Displayer::leftPad(const int &nValue, const int &nSize)
{
    char buff[nSize + 1];
    String format = "%." + String(nSize) + "u";
    sprintf(buff, format.c_str(), nValue);

    return String(buff);
}

/**
 * @brief Changement de contraste (rétroéclairage) de l'écran
 * 
 * @param value 
 */
void Displayer::setContrast(const uint8_t &nValue)
{
    selectScreen();
    m_pScreen->setContrast(nValue);
}

/**
 * @brief Séléctione un écran sur le multiplexeur I2C
 * 
 */
void Displayer::selectScreen()
{
    if(m_nIndexDisplay != -1 && Displayer::m_nSelectedScreen != m_nIndexDisplay)
    {
        Wire.beginTransmission(0x70);  // TCA9548A address
        Wire.write(1 << m_nIndexDisplay);
        Wire.endTransmission();
        Displayer::m_nSelectedScreen = m_nIndexDisplay;
    }
}