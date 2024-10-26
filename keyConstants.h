#ifndef KEYCONSTANTS_H
#define KEYCONSTANTS_H

#include <map>
#include <string>

class KeyPair{
public:
    KeyPair(const std::string &vk = "", const std::string &name = "") : VKName (vk), Name (name){}
    std::string VKName;
    std::string Name;

};

class Keys
{
public:
    static std::map<int, KeyPair > KEYS;
};

std::map<int, KeyPair> Keys::KEYS = {
    {0x00, {"[VK_LBUTTON]", "Left Mouse Button"}},
        {0x01, {"[VK_RBUTTON]", "Right Mouse Button"}},
        {0x02, {"[VK_CANCEL]", "Control-Break Processing"}},
        {0x03, {"[VK_MBUTTON]", "Middle Mouse Button"}},
        {0x04, {"[VK_XBUTTON1]", "X1 Mouse Button"}},
        {0x05, {"[VK_XBUTTON2]", "X2 Mouse Button"}},
        {0x08, {"[VK_BACK]", "Backspace"}},
        {0x09, {"[VK_TAB]", "Tab"}},
        {0x0C, {"[VK_CLEAR]", "Clear"}},
        {0x0D, {"[VK_RETURN]", "Enter"}},
        {0x10, {"[VK_SHIFT]", "Shift"}},
        {0x11, {"[VK_CONTROL]", "Control"}},
        {0x12, {"[VK_MENU]", "Alt"}},
        {0x14, {"[VK_CAPITAL]", "Caps Lock"}},
        {0x1B, {"[VK_ESCAPE]", "Escape"}},
        {0x20, {"[VK_SPACE]", "Spacebar"}},
        {0x21, {"[VK_PAGEUP]", "Page Up"}},
        {0x22, {"[VK_PAGEDOWN]", "Page Down"}},
        {0x23, {"[VK_END]", "End"}},
        {0x24, {"[VK_HOME]", "Home"}},
        {0x25, {"[VK_LEFT]", "Left Arrow"}},
        {0x26, {"[VK_UP]", "Up Arrow"}},
        {0x27, {"[VK_RIGHT]", "Right Arrow"}},
        {0x28, {"[VK_DOWN]", "Down Arrow"}},
        {0x2C, {"[VK_SNAPSHOT]", "Print Screen"}},
        {0x2D, {"[VK_INSERT]", "Insert"}},
        {0x2E, {"[VK_DELETE]", "Delete"}},
        {0x30, {"[VK_0]", "0"}},
        {0x31, {"[VK_1]", "1"}},
        {0x32, {"[VK_2]", "2"}},
        {0x33, {"[VK_3]", "3"}},
        {0x34, {"[VK_4]", "4"}},
        {0x35, {"[VK_5]", "5"}},
        {0x36, {"[VK_6]", "6"}},
        {0x37, {"[VK_7]", "7"}},
        {0x38, {"[VK_8]", "8"}},
        {0x39, {"[VK_9]", "9"}},
        {0x41, {"[VK_A]", "A"}},
        {0x42, {"[VK_B]", "B"}},
        {0x43, {"[VK_C]", "C"}},
        {0x44, {"[VK_D]", "D"}},
        {0x45, {"[VK_E]", "E"}},
        {0x46, {"[VK_F]", "F"}},
        {0x47, {"[VK_G]", "G"}},
        {0x48, {"[VK_H]", "H"}},
        {0x49, {"[VK_I]", "I"}},
        {0x4A, {"[VK_J]", "J"}},
        {0x4B, {"[VK_K]", "K"}},
        {0x4C, {"[VK_L]", "L"}},
        {0x4D, {"[VK_M]", "M"}},
        {0x4E, {"[VK_N]", "N"}},
        {0x4F, {"[VK_O]", "O"}},
        {0x50, {"[VK_P]", "P"}},
        {0x51, {"[VK_Q]", "Q"}},
        {0x52, {"[VK_R]", "R"}},
        {0x53, {"[VK_S]", "S"}},
        {0x54, {"[VK_T]", "T"}},
        {0x55, {"[VK_U]", "U"}},
        {0x56, {"[VK_V]", "V"}},
        {0x57, {"[VK_W]", "W"}},
        {0x58, {"[VK_X]", "X"}},
        {0x59, {"[VK_Y]", "Y"}},
        {0x5A, {"[VK_Z]", "Z"}},
    // Add more keys as needed...
    {0xE0, {"[VK_LSHIFT]", "Left Shift"}},
        {0xE1, {"[VK_RSHIFT]", "Right Shift"}},
        {0xE2, {"[VK_LCONTROL]", "Left Control"}},
        {0xE3, {"[VK_RCONTROL]", "Right Control"}},
        {0xE4, {"[VK_LMENU]", "Left Alt"}},
        {0xE5, {"[VK_RMENU]", "Right Alt"}}
}

#endif // KEYCONSTANTS_H
