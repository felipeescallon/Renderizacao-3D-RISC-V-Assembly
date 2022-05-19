# Info for TFT functions

# TFT Settings
.equ TFT_DMA_CH,      0x3
.equ TFT_DMA_SPI0_TX, 0x1
.equ TFT_SPI_DST_ADD, 0x52000060

# TFT Commands
.equ NO_OPERATION,           0x00
.equ SOFTWARE_RESET,         0x01
.equ READ_ID,                0x04
.equ READ_STATUS,            0x09
.equ READ_POWER_MODE,        0x0A
.equ READ_MADCTL,            0x0B
.equ READ_PIXEL_FORMAT,      0x0C
.equ READ_IMAGE_FORMAT,      0x0D
.equ READ_SIGNAL_MODE,       0x0E
.equ READ_SELT_DIAG_RESULT,  0x0F
.equ SLEEP_ON,               0x10
.equ SLEEP_OFF,              0x11
.equ PARTIAL_DISPLAY_ON,     0x12
.equ NORMAL_DISPLAY_ON,      0x13
.equ INVERSION_DISPLAY_OFF,  0x20
.equ INVERSION_DISPLAY_ON,   0x21
.equ GAMMA_SET,              0x26
.equ DISPLAY_OFF,            0x28
.equ DISPLAY_ON,             0x29
.equ HORIZONTAL_ADDRESS_SET, 0x2A
.equ VERTICAL_ADDRESS_SET,   0x2B
.equ MEMORY_WRITE,           0x2C
.equ COLOR_SET,              0x2D
.equ MEMORY_READ,            0x2E
.equ PARTIAL_AREA,           0x30
.equ VERTICAL_SCROL_DEFINE,  0x33
.equ TEAR_EFFECT_LINE_OFF,   0x34
.equ TEAR_EFFECT_LINE_ON,    0x35
.equ MEMORY_ACCESS_CTL,      0x36
.equ VERTICAL_SCROL_S_ADD,   0x37
.equ IDLE_MODE_OFF,          0x38
.equ IDLE_MODE_ON,           0x39
.equ PIXEL_FORMAT_SET,       0x3A
.equ WRITE_MEMORY_CONTINUE,  0x3C
.equ READ_MEMORY_CONTINUE,   0x3E
.equ SET_TEAR_SCANLINE,      0x44
.equ GET_SCANLINE,           0x45
.equ WRITE_BRIGHTNESS,       0x51
.equ READ_BRIGHTNESS,        0x52
.equ WRITE_CTRL_DISPALY,     0x53
.equ READ_CTRL_DISPALY,      0x54
.equ WRITE_BRIGHTNESS_CTL,   0x55
.equ READ_BRIGHTNESS_CTL,    0x56
.equ WRITE_MIN_BRIGHTNESS,   0x5E
.equ READ_MIN_BRIGHTNESS,    0x5F
.equ READ_ID1,               0xDA
.equ READ_ID2,               0xDB
.equ READ_ID3,               0xDC
.equ RGB_IF_SIGNAL_CTL,      0xB0
.equ NORMAL_FRAME_CTL,       0xB1
.equ IDLE_FRAME_CTL,         0xB2
.equ PARTIAL_FRAME_CTL,      0xB3
.equ INVERSION_CTL,          0xB4
.equ BLANK_PORCH_CTL,        0xB5
.equ DISPALY_FUNCTION_CTL,   0xB6
.equ ENTRY_MODE_SET,         0xB7
.equ BACKLIGHT_CTL1,         0xB8
.equ BACKLIGHT_CTL2,         0xB9
.equ BACKLIGHT_CTL3,         0xBA
.equ BACKLIGHT_CTL4,         0xBB
.equ BACKLIGHT_CTL5,         0xBC
.equ BACKLIGHT_CTL7,         0xBE
.equ BACKLIGHT_CTL8,         0xBF
.equ POWER_CTL1,             0xC0
.equ POWER_CTL2,             0xC1
.equ VCOM_CTL1,              0xC5
.equ VCOM_CTL2,              0xC7
.equ NV_MEMORY_WRITE,        0xD0
.equ NV_MEMORY_PROTECT_KEY,  0xD1
.equ NV_MEMORY_STATUS_READ,  0xD2
.equ READ_ID4,               0xD3
.equ POSITIVE_GAMMA_CORRECT, 0xE0
.equ NEGATIVE_GAMMA_CORRECT, 0xE1
.equ DIGITAL_GAMMA_CTL1,     0xE2
.equ DIGITAL_GAMMA_CTL2,     0xE3
.equ INTERFACE_CTL,          0xF6

# Pixel Color Format
.equ PIXEL_565_16BIT,        0x55
.equ PIXEL_666_18BIT,        0x66

# Display Direction
.equ DIR_XY_RL_UD,           0x00
.equ DIR_YX_RL_UD,           0x20
.equ DIR_XY_LR_UD,           0x40
.equ DIR_YX_LR_UD,           0x60
.equ DIR_XY_RL_DU,           0x80
.equ DIR_YX_RL_DU,           0xA0
.equ DIR_XY_LR_DU,           0xC0
.equ DIR_YX_LR_DU,           0xE0