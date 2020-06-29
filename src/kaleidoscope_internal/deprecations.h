/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2020  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define DEPRECATED(tag)                                                 \
  __attribute__((deprecated(_DEPRECATE(_DEPRECATED_MESSAGE_ ## tag))))

#define _DEPRECATE(message) "\n"                                               \
  "------------------------------------------------------------------------\n" \
  message                                                                      \
  "\n"                                                                         \
  "------------------------------------------------------------------------\n" \

/* Messages */

#define _DEPRECATED_MESSAGE_LAYER_DEACTIVATETOP  __NL__ \
  "`Layer.deactivateTop()` is deprecated.\n"     __NL__ \
  "Please use `Layer.deactivateMostRecent()` instead."

#define _DEPRECATED_MESSAGE_LAYER_TOP __NL__ \
  "`Layer.top()` is deprecated.\n"    __NL__ \
  "Please use `Layer.mostRecent()` instead."

#define _DEPRECATED_MESSAGE_LAYER_GETLAYERSTATE    __NL__ \
  "`Layer.getLayerState()` is deprecated.\n"       __NL__ \
  "Layers are now in activation-order, please use" __NL__ \
  "`Layer.forEachActiveLayer()` instead."

#define _DEPRECATED_MESSAGE_HID_FACADE                                   __NL__ \
  "The HID facade in the `kaleidoscope::hid` namespace is deprecated.\n" __NL__ \
  "Please use `Kaleidoscope.hid()` instead."

#define _DEPRECATED_MESSAGE_DIRECT_KEY_MEMBER_ACCESS                           \
  "Direct access to `Key` class' data members is deprecated.\n"                \
  "Please use `Key::setKeyCode()`/`Key::getKeyCode()` or\n"                    \
  "`Key::setFlags()`/`Key::getFlags()` instead.\n"                             \
  "\n"                                                                         \
  "For further information and examples on how to do that, \n"                 \
  "please see UPGRADING.md."

#define _DEPRECATED_MESSAGE_KEY_MEMBER_RAW_ACCESS                              \
  "The member variable `raw` of class Key had to be removed. Please \n"        \
  "use `Key::setRaw()`/`Key::getRaw()` to set and get raw data.\n"             \
  "\n"                                                                         \
  "Important: This is not a deprecation. Your code will compile but fail\n"    \
  "           to link until all access to `Key::raw` has been replaced.\n"     \
  "\n"                                                                         \
  "For further information and examples on how to do that, \n"                 \
  "please see UPGRADING.md."
