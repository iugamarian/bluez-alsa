/*
 * bluealsa - utils.h
 * Copyright (c) 2016 Arkadiusz Bokowy
 *
 * This file is a part of bluez-alsa.
 *
 * This project is licensed under the terms of the MIT license.
 *
 */

#ifndef BLUEALSA_UTILS_H_
#define BLUEALSA_UTILS_H_

#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <dbus/dbus.h>

int a2dp_default_bitpool(int freq, int mode);
int hci_devlist(struct hci_dev_info **di, int *num);
const char *dbus_type_to_string(int typecode);
int dbus_devpath_to_bdaddr(const char *path, bdaddr_t *addr);
const char *bluetooth_profile_to_string(uint8_t profile, uint8_t codec);

dbus_bool_t dbus_message_iter_append_dict_array(DBusMessageIter *iter,
		char *key, int type, const void *value, int elements);
dbus_bool_t dbus_message_iter_append_dict_variant(DBusMessageIter *iter,
		char *key, int type, const void *value);

#endif
