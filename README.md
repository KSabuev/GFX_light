ENG/[RU](READMEru.md)
# GFX_light  

A lightweight graphics library for displays, compatible with Adafruit_GFX. Provides basic functionality for drawing text and graphics primitives with minimal memory consumption.

## Features

- Minimal memory consumption
- Built-in 5x8 pixel font (95 characters from 32 to 126)
- Display rotation support (0°, 90°, 180°, 270°)
- Text scaling
- Basic graphics primitives
- Arduino Print compatibility (print/println support)
- Optimized for AVR architecture

## Installation

### Manual Installation
1. Download the library archive
2. Unpack to the `libraries` folder of your Arduino IDE
3. Restart Arduino IDE

## API Reference

### Basic Methods

| Method | Description |
|--------|-------------|
| `drawPixel(x, y, color)` | **Virtual method that you must implement.** Draws a single pixel. |
| `fillRect(x, y, w, h, color)` | **Virtual method.** Draws a filled rectangle. Base implementation draws via `drawPixel`, but you can override it for hardware acceleration. |
| `drawFastVLine(x, y, h, color)` | Draws a vertical line |
| `drawFastHLine(x, y, w, color)` | Draws a horizontal line |
| `fillScreen(color)` | Fills the entire screen with color |
| `setRotation(r)` | Sets rotation (0-3) |
| `invertDisplay(i)` | Inverts the display |

### Text Handling

| Method | Description |
|--------|-------------|
| `setCursor(x, y)` | Sets cursor position |
| `setTextSize(s)` | Sets text size (1 = 5x8 pixels) |
| `setTextColor(c)` | Sets text color |
| `setTextColor(c, bg)` | Sets text and background color |
| `setTextWrap(w)` | Enables/disables text wrapping |
| `print()` / `println()` | Text output (inherited from Print) |
| `getCursorX()` / `getCursorY()` | Get current cursor position |
| `width()` / `height()` | Get display dimensions |

## Compatibility

The library has been tested on the following platforms:
- Arduino Uno / Nano
- Arduino Mega
- Other AVR platforms

## Projects Using GFX_light

- [**ILI932X_light**](https://github.com/KSabuev/ILI932X_light) — Lightweight driver for TFT displays based on ILI932X controller
