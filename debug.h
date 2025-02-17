// this file allows to enabled and disable rs232 debugging on a detailed basis
#ifndef DEBUG_H
#define DEBUG_H

#include "hardware.h"

// ------------ generic debugging -----------

#if 0
#define menu_debugf(...) iprintf(__VA_ARGS__)
#else
#define menu_debugf(...)
#endif


// ----------- minimig debugging -------------
#if 0
#define hdd_debugf(a, ...) iprintf("\033[1;32mHDD: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define hdd_debugf(...)
#endif

#if 0
#define fdd_debugf(...) iprintf(__VA_ARGS__)
#else
#define fdd_debugf(...)
#endif

// -------------- TOS debugging --------------

#if 0
#define tos_debugf(a, ...) iprintf("\033[1;32mTOS: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define tos_debugf(...)
#endif

#if 0
// ikbd debug output in red
#define IKBD_DEBUG
#define ikbd_debugf(a, ...) iprintf("\033[1;31mIKBD: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define ikbd_debugf(...)
#endif

#if 1
// 8bit debug output in blue
#define bit8_debugf(a, ...) iprintf("\033[1;34m8BIT: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define bit8_debugf(...)
#endif

// ------------ Archie debugging ------------
#if 0
#define archie_debugf(a, ...) iprintf("\033[1;31mARCHIE: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define archie_debugf(...)
#endif

// ------------ usb debugging -----------
#if 0
// usb debug output in green
#define usb_debugf(a, ...) iprintf("\033[1;32mUSB: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define usb_debugf(...)
#endif

#if 1
#define hidp_debugf(a, ...)  iprintf("\033[1;34mHIDP: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define hidp_debugf(...)
#endif

#if 0
// usb asix debug output in blue
#define asix_debugf(a, ...) iprintf("\033[1;34mASIX: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define asix_debugf(...)
#endif

#if 1
// usb hid debug output in green
#define hid_debugf(a, ...) iprintf("\033[1;32mHID: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define hid_debugf(...)
#endif

#if 0
// usb mass storage debug output in purple
#define storage_debugf(a, ...) iprintf("\033[1;35mSTORAGE: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define storage_debugf(...)
#endif

#if 0
// usb rtc debug output in blue
#define usbrtc_debugf(a, ...) iprintf("\033[1;34mUSBRTC: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define usbrtc_debugf(...)
#endif

#if 0
// usb pl2303 debug output in blue
#define pl2303_debugf(a, ...) iprintf("\033[1;34mPL2303: " a "\033[0m\n", ##__VA_ARGS__)
#else
#define pl2303_debugf(...)
#endif

#if 1
// ini_parser debug output
#define ini_parser_debugf(a, ...) iprintf("\033[1;34mINI_PARSER : " a "\033[0m\n",## __VA_ARGS__)
#else
#define ini_parser_debugf(...)
#endif

#if 0
// cue_parser debug output
#define cue_parser_debugf(a, ...) iprintf("\033[1;34mCUE_PARSER : " a "\033[0m\n",## __VA_ARGS__)
#else
#define cue_parser_debugf(...)
#endif

#if 0
// pcecd debug output
#define pcecd_debugf(a, ...) iprintf("\033[1;34mPCECD : " a "\033[0m\n",## __VA_ARGS__)
#else
#define pcecd_debugf(...)
#endif

#if 0
// neocd debug output
#define neocd_debugf(a, ...) iprintf("\033[1;34mNEOCD : " a "\033[0m\n",## __VA_ARGS__)
#else
#define neocd_debugf(...)
#endif

#endif // DEBUG_H
